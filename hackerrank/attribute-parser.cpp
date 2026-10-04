// Problem: Attribute Parser
// Link: https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;
    
    cin.ignore(); // Consume the newline after reading N and Q

    unordered_map<string, string> hrml_map;
    vector<string> tag_stack;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        
        stringstream ss(line);
        string token;
        
        // Read the first word inside the tag (e.g., "<tag1" or "</tag1>")
        ss >> token;
        
        if (token.substr(0, 2) == "</") {
            // Closing tag: pop from stack
            tag_stack.pop_back();
        } else {
            // Opening tag: extract tag name
            string tag_name = token.substr(1); // strip leading '<'
            if (tag_name.back() == '>') {
                tag_name.pop_back(); // handle opening tag with no attributes: "<tag1>"
            }
            
            tag_stack.push_back(tag_name);

            // Construct current nested tag path (e.g., "tag1.tag2")
            string current_path = "";
            for (size_t j = 0; j < tag_stack.size(); j++) {
                if (j > 0) current_path += ".";
                current_path += tag_stack[j];
            }

            // Read attributes and their values
            string attr_name, eq, attr_val;
            while (ss >> attr_name) {
                if (attr_name == ">") break; // end of tag
                
                ss >> eq >> attr_val; // read "=" and value string
                
                // Remove potential trailing '>' from value string
                if (attr_val.back() == '>') {
                    attr_val.pop_back();
                }
                
                // Strip double quotes surrounding the value
                if (attr_val.front() == '"' && attr_val.back() == '"') {
                    attr_val = attr_val.substr(1, attr_val.length() - 2);
                }

                // Store in map using key format: path~attr_name
                string key = current_path + "~" + attr_name;
                hrml_map[key] = attr_val;
            }
        }
    }

    // Process Q queries
    for (int i = 0; i < q; i++) {
        string query;
        getline(cin, query);
        
        if (hrml_map.find(query) != hrml_map.end()) {
            cout << hrml_map[query] << "\n";
        } else {
            cout << "Not Found!\n";
        }
    }

    return 0;
}