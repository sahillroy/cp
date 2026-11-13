// Problem: ACM ICPC Team
// Link: https://www.hackerrank.com/challenges/acm-icpc-team/problem?isFullScreen=true

int n = topic.size();       // Number of people
    int m = topic[0].size();    // Number of topics
    
    int maxTopics = 0;
    int teamCount = 0;

    // Pick person 1
    for (int i = 0; i < n; i++) {
        // Pick person 2
        for (int j = i + 1; j < n; j++) {
            int known = 0;

            // Check every topic
            for (int k = 0; k < m; k++) {
                if (topic[i][k] == '1' || topic[j][k] == '1') {
                    known++;
                }
            }

            // Update max topics and team count
            if (known > maxTopics) {
                maxTopics = known;
                teamCount = 1;
            } else if (known == maxTopics) {
                teamCount++;
            }
        }
    }

    return {maxTopics, teamCount};