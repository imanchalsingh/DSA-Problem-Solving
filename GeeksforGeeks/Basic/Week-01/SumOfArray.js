class Solution {
  arraySum(arr) {
    const array = [1, 2, 3, 4, 5];
    let sum = 0;

    array.forEach((element) => {
      sum += element;
    });

    return sum;
  }
}

const solution = new Solution();
console.log(solution.arraySum());


// According to time complexity Reduce method take less time than other method for problem "Sum of Array."
class Solution1 {
  arraySum(arr) {
    return arr.reduce((sum, element) => sum + element, 0);
  }
}

const solution1 = new Solution();
console.log(solution1.arraySum());

// we can solve it using for loop.
class Solution2 {
    arraySum(arr) {
      let sum = 0;
      for (let i = 0; i < arr.length; i++) {
        sum += arr[i];
      }
      return sum;
    }
  }
  
  const solution2 = new Solution();
  console.log(solution2.arraySum([1, 2, 3, 4]));
  console.log(solution2.arraySum([1, 3, 3]));
  
