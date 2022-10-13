
function calculateBigram(str: string) {
    const bigram: string[] = [];
    str = str.toLowerCase();
    for (let i = 0; i < str.length - 1; i++) {
        bigram.push(str.substring(i, i + 2));
    }
    return bigram;
}

function calculateSorensenDiceCoefficient(X: string[], Y: string[]) {
    const intersections = X.filter((x) => Y.includes(x));
    return 2 * intersections.length / (X.length + Y.length);
}

/**
 * 
 * word
 * wo or rd
 * 
 */
