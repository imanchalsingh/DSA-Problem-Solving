class Solution {
  findDuplicates(arr) {
    let frequencyMap = {};
    let result = [];

    for (let num of arr) {
      frequencyMap[num] = (frequencyMap[num] || 0) + 1;
    }

    for (let key in frequencyMap) {
      if (frequencyMap[key] > 1) {
        result.push(Number(key));
      }
    }

    return result;
  }
}
