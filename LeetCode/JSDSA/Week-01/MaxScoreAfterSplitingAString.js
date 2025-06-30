var maxScore = function(s) {
    let maxScore = 0;
    let zeros = 0, ones = 0;

    for (const char of s) {
        if (char === '1') {
            ones++;
        }
    }


    for (let i = 0; i < s.length - 1; i++) {
        if (s[i] === '0') {
            zeros++;
        } else {
            ones--;
        }

        const score = zeros + ones;
        maxScore = Math.max(maxScore, score);
    }

    return maxScore;
};