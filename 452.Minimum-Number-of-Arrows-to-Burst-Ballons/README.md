#Leedcode---Solutions
<h2><a href="https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/">452. Minimum Number of Arrows to Remove Ballons</h2>
  <h3>Medium</h3>
	<hr>
  <p>
    There are some spherical balloons taped onto a flat wall that represents the XY-plane. The balloons are represented as a 2D integer array <code>points</code> where 
    <code>points[i] = [xstart, xend]</code> denotes a balloon whose <strong>horizontal diameter</strong> stretches between <code>xstart</code> and <code>xend</code>. You do not know the exact y-coordinates of the balloons.
  </p>
  <p>
    Arrows can be shot up <strong>directly vertically</strong> (in the positive y-direction) from different points along the x-axis. A balloon with <code>xstart</code> and <code>xend</code> is <strong>burst</strong> by an arrow 
    shot at <code>x</code> if <code>xstart <= x <= xend</code>. There is <strong>no limit</strong> to the number of arrows that can be shot. A shot arrow keeps traveling up infinitely, bursting any balloons in its path.
  </p>
  <p>
    Given the array <code>points</code>, return the <strong>minimum</strong> number of arrows that must be shot to burst all balloons.
  </p>
  <p>
    <strong>Example 1:</strong>
  </p>
  <pre>
  <strong>Input:</strong>
  points = [[10,16],[2,8],[1,6],[7,12]]
  <strong>Output:</strong> 2
  <strong>Explanation:</strong> The balloons can be burst by 2 arrows:
  - Shoot an arrow at x = 6, bursting the balloons [2,8] and [1,6].
  - Shoot an arrow at x = 11, bursting the balloons [10,16] and [7,12].
</pre>
  <p>
    <strong>Example 2:</strong>
  </p>
  <pre>
  <strong>Input:</strong>
  points = [[1,2],[3,4],[5,6],[7,8]]
  <strong>Output:</strong> 4
  <strong>Explanation:</strong> One arrow needs to be shot for each balloon for a total of 4 arrows.
</pre>
  <p>
    <strong>Example 3:</strong>
  </p>
  <pre>
  <strong>Input:</strong>
  points = [[1,2],[2,3],[3,4],[4,5]]
  <strong>Output:</strong> 2
  <strong>Explanation:</strong> The balloons can be burst by 2 arrows:
  - Shoot an arrow at x = 2, bursting the balloons [1,2] and [2,3].
  - Shoot an arrow at x = 4, bursting the balloons [3,4] and [4,5].
</pre>
  <p>
    <strong>Constraints:</strong>
  </p>
  <ul>
	<li><code>1 &lt;= points.length &lt;= 10<sup>5</sup></code></li>
	<li><code>points[i].length == 2</code></li>
	<li><code>-2<sup>31</sup> &lt;= x<sub>start</sub> &lt; x<sub>end</sub> &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
