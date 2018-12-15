const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030C1A", /* black   */
  [1] = "#F31D3A", /* red     */
  [2] = "#9E2B52", /* green   */
  [3] = "#D91E4F", /* yellow  */
  [4] = "#F7304D", /* blue    */
  [5] = "#AE455F", /* magenta */
  [6] = "#F1565A", /* cyan    */
  [7] = "#a2a7be", /* white   */

  /* 8 bright colors */
  [8]  = "#717485",  /* black   */
  [9]  = "#F31D3A",  /* red     */
  [10] = "#9E2B52", /* green   */
  [11] = "#D91E4F", /* yellow  */
  [12] = "#F7304D", /* blue    */
  [13] = "#AE455F", /* magenta */
  [14] = "#F1565A", /* cyan    */
  [15] = "#a2a7be", /* white   */

  /* special colors */
  [256] = "#030C1A", /* background */
  [257] = "#a2a7be", /* foreground */
  [258] = "#a2a7be",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
