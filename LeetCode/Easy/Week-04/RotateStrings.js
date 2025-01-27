var rotateString = function (s, goal) {
  if (s.length !== goal.length) return false;

  const doubleS = s + s;
  return doubleS.includes(goal);
};
