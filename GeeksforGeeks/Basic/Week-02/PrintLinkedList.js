class Solution {
  // Function to display the elements of a linked list in the same line
  printList(head) {
    let current = head;
    let result = "";

    while (current !== null) {
      result += current.data + " "; 
      current = current.next;
    }

    console.log(result.trim());
  }
}

// Example usage:
class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

let head = new Node(1);
head.next = new Node(2);
head.next.next = new Node(3);
head.next.next.next = new Node(4);

const solution = new Solution();
solution.printList(head);
