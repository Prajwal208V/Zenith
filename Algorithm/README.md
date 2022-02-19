### Searching Algorithms

<P>Searching Algorithms are designed to <em>check for an 'element' or 'retrieve' an element</em> from any data structure where it is stored </P>
<p>these algorithms are generally classified into two categories: </p>
<ol>
  <li><b>Sequential Search:</b>  In this, the list or array is traversed sequentially and every element is checked. </li>
  <li><b>Interval Search:</b> These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are much more efficient than Linear    Search as they repeatedly target the center of the search structure and divide the search space in half.</li>
</ol>
## Searching Algorithms :
  <ol>
    <li><b>Linear Search: </b>
      <b>A simple approach is to do a linear search</b>
            <ul>
              <li>Start from the leftmost element of arr[] and one by one compare x with each element of arr[]</li>
              <li>If x matches with an element, return the index.</li>
              <li>If x doesn’t match with any of elements, return -1.</li>
            </ul>
      <em>The time complexity of the liner Serach algorithm is O(n).</em>
    </li>
    <li><b>Binary Search</b>
      Binary search works only on sorted arrays
      <p><b>A simple approach is to do a Binary search:</b> Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea        of binary search is to use the information that the array is sorted and reduce the time complexity to <b>O(Log n)</b>.</p>
      <p><b>The basic steps to perform Binary Search are:</b></p>
      <ul>
        <li>Begin with an interval covering the whole array. </li>
        <li>If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. </li>
        <li>Otherwise, narrow it to the upper half. </li>
        <li>Repeatedly check until the value is found or the interval is empty.</li>
      </ul>
      <p>We basically ignore half of the elements just after one comparison.</p>
    </li>
    <li><b>Jump Search</b></li>
    <li><b></b></li>
    <li><b></b></li>
    <li><b></b></li>
  </ol>
