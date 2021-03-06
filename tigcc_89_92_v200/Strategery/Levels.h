// C Header File
// Created 5/2/2003; 5:59:40 PM

///////LEVELS FOR STRATEGERY///////

unsigned char board1[16][10]= // matrix array for level one.
// numbers going from left to right, down the column
{{0,0,0,0,0,0,0,0,0,0},  // column one
 {0,1,1,1,1,1,1,0,1,0},  // column two
 {0,1,1,0,1,1,1,0,1,0},  // column three...
 {0,1,1,0,1,1,1,1,1,0},
 {0,1,1,0,0,1,1,1,1,0},
 {0,1,1,1,1,1,1,1,1,0},
 {0,1,1,1,1,0,1,1,1,0},
 {0,1,0,0,1,0,1,1,1,0},
 {0,1,1,1,1,1,2,1,1,0},
 {0,1,1,1,1,1,0,0,1,0},
 {0,1,0,1,1,1,1,1,1,0},
 {0,1,1,1,1,0,1,1,1,0},
 {0,1,1,1,1,1,1,1,1,0},
 {0,1,1,1,1,0,1,1,1,0},
 {0,1,1,1,1,1,1,1,1,0},
 {0,0,0,0,0,0,0,0,0,0}};  // column 16
 
unsigned char board2[16][10]= // matrix array for level two.
{{0,1,1,0,0,1,1,0,1,0},  // column one
 {1,0,0,0,0,0,0,0,0,1},
 {1,0,0,0,1,1,0,0,0,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,2,1,1,1,1,2,0,0},
 {1,0,1,0,0,0,0,1,0,1},
 {1,0,1,0,0,0,0,1,0,1},
 {0,1,1,0,0,0,0,1,1,0},
 {0,1,1,0,0,0,0,1,1,0},
 {1,0,1,0,0,0,0,1,0,1},
 {1,0,1,0,0,0,0,1,0,1},
 {0,0,2,1,1,1,1,2,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {1,0,0,0,1,1,0,0,0,1},
 {1,0,0,0,0,0,0,0,0,1},
 {0,1,0,1,1,0,0,1,1,0}};  // column 16
 
unsigned char board3[16][10]= // matrix array for level three.
{{0,0,0,0,0,0,0,0,0,0},
 {0,0,1,0,0,0,1,0,0,0},
 {0,1,0,2,0,2,0,1,0,0},
 {0,1,1,1,0,1,1,1,0,0},
 {0,1,0,2,0,2,0,1,0,0},
 {0,0,1,1,0,1,1,0,0,0},
 {0,2,1,2,0,2,1,2,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,2,1,2,0,2,1,2,0,0},
 {0,0,1,1,0,1,1,0,0,0},
 {0,1,0,2,0,2,0,1,0,0},
 {0,1,1,1,0,1,1,1,0,0},
 {0,1,0,2,0,2,0,1,0,0},
 {0,0,1,0,0,0,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

 unsigned char board4[16][10]= // matrix array for level four.
{{0,0,0,0,0,0,2,0,0,0},
 {0,0,0,0,0,0,0,1,1,2},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,2,0,0,0,0},
 {0,0,0,0,2,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {2,1,1,0,0,0,0,1,1,2},
 {0,0,0,2,0,0,2,0,0,0}};

 unsigned char board5[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,2,1,1,1,1,2,0,0},
 {0,0,1,1,1,1,1,1,0,0},
 {0,0,1,1,2,2,1,1,0,0},
 {0,0,1,1,2,2,1,1,0,0},
 {0,0,1,1,1,1,1,1,0,0},
 {0,0,2,1,1,1,1,2,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

 unsigned char board6[16][10]= 
{{0,0,0,1,0,1,0,0,0,1},
 {0,1,0,0,0,1,0,0,0,0},
 {1,1,0,0,0,0,2,1,1,0},
 {0,0,0,1,0,0,1,1,0,0},
 {1,0,0,0,2,1,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,1},
 {1,1,1,0,0,1,1,0,1,1},
 {1,2,1,0,0,1,0,0,0,1},
 {1,1,1,1,1,1,0,2,0,0},
 {1,1,0,0,2,0,0,1,1,0},
 {1,0,0,0,1,0,0,0,1,0},
 {0,0,0,0,0,0,1,0,0,1},
 {0,0,0,0,1,0,0,1,0,0},
 {1,0,1,1,2,1,1,0,0,0},
 {0,1,0,0,1,0,1,1,0,1},
 {0,0,0,0,0,0,0,0,1,2}};

 unsigned char board7[16][10]= 
{{0,1,0,1,0,1,0,1,0,1},
 {1,2,0,1,0,1,0,1,0,1},
 {0,0,0,1,0,1,0,1,0,1},
 {1,1,1,2,0,1,0,1,0,1},
 {0,0,0,0,0,1,0,1,0,1},
 {1,1,1,1,1,2,0,1,0,1},
 {0,0,0,0,0,0,0,1,0,1},
 {1,1,1,1,1,1,1,2,0,1},
 {0,0,0,0,0,0,0,0,0,1},
 {1,1,1,1,1,1,1,1,1,2},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,0,0,0,1},
 {0,1,0,0,0,0,0,0,1,0}};

 unsigned char board8[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,1,1,0,0,2,2,0,0},
 {0,2,0,0,2,1,0,0,1,0},
 {0,2,0,0,2,1,0,0,1,0},
 {0,0,1,1,0,0,2,2,0,0},
 {0,0,2,2,0,0,1,1,0,0},
 {0,1,0,0,1,2,0,0,2,0},
 {0,1,0,0,1,2,0,0,2,0},
 {0,0,2,2,0,0,1,1,0,0},
 {0,0,1,1,0,0,2,2,0,0},
 {0,2,0,0,2,1,0,0,1,0},
 {0,2,0,0,2,1,0,0,1,0},
 {0,0,1,1,0,0,2,2,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};
 
 unsigned char board9[16][10]= 
{{0,2,0,0,0,0,1,0,2,0},
 {0,2,0,0,2,2,0,2,0,0},
 {0,2,0,1,0,2,0,2,0,0},
 {0,2,2,0,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,1,2,0,2,1,0},
 {0,2,1,2,0,2,0,2,0,0}, 
 {0,2,1,2,0,2,0,2,0,0},
 {0,2,1,2,0,2,0,2,0,0}, 
 {0,2,1,2,0,2,0,2,0,0},
 {0,0,1,0,0,2,0,2,2,1},
 {0,0,0,0,0,1,0,0,0,0}};

  unsigned char board10[16][10]= 
{{0,0,2,0,0,0,0,0,0,1},
 {0,0,2,0,0,0,0,0,0,0},
 {0,0,0,0,0,1,0,1,0,0},
 {1,0,0,0,0,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,1,1,0,2,0,0,0},
 {0,0,0,0,0,0,0,0,0,1},
 {0,0,0,0,0,0,0,0,1,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,2,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,0}, 
 {0,0,0,0,2,0,0,0,0,0},
 {0,0,0,0,2,0,0,1,0,0}, 
 {0,1,1,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

   unsigned char board11[16][10]= 
{{0,1,1,0,0,0,0,0,1,0},
 {0,0,0,0,0,0,0,0,0,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,1,0,0,0,0},
 {0,0,0,2,0,0,2,0,0,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,1,0,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,0,1,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,2,0,0,0,0,2,0,0}, 
 {0,0,0,2,0,0,2,0,0,0},
 {0,0,0,0,1,1,0,0,0,0}, 
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,1},
 {0,1,1,0,0,0,0,0,1,0}};
 
  unsigned char board12[16][10]= 
{{0,0,0,0,0,0,0,1,1,2},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,1,1,2,1,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,1,2},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,1,1,2,1,1,1,1},
 {0,0,0,0,0,0,1,2,1,1},
 {0,0,0,0,0,0,0,0,1,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,1,1,2,1}, 
 {0,0,0,0,0,0,0,0,0,0},
 {0,2,1,1,2,1,1,2,1,1}, 
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,2,1},
 {0,0,0,0,0,0,0,0,0,0}};

 unsigned char board13[16][10]= 
{{0,0,0,2,0,0,0,0,0,1},
 {0,0,1,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,1,0,0},
 {1,0,0,0,0,0,2,0,0,0},
 {0,0,0,2,0,0,0,0,0,1},
 {0,0,1,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,1,0,0},
 {1,0,0,0,0,0,2,0,0,0},
 {0,0,0,2,0,0,0,0,0,1},
 {0,0,1,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,1,0,0},
 {1,0,0,0,0,0,2,0,0,0},
 {0,0,0,2,0,0,0,0,0,1},
 {0,0,1,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,1,0,0},
 {1,0,0,0,0,0,2,0,0,0},};
 
 unsigned char board14[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,0,0,0,0,0},
 {0,0,0,1,2,1,0,0,0,0},
 {0,0,1,0,1,0,1,0,2,0},
 {0,2,1,2,2,2,1,2,0,0},
 {2,0,1,2,2,2,1,0,0,0},
 {0,1,2,2,2,2,2,1,0,0},
 {2,1,2,2,2,2,2,1,0,0},
 {0,2,1,2,2,2,1,2,0,0},
 {0,0,0,1,1,1,0,0,2,0}, 
 {0,0,0,0,1,0,0,0,0,0},
 {0,0,0,1,1,0,0,0,0,0}, 
 {0,0,0,1,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

 unsigned char board15[16][10]= 
{{0,1,1,0,1,1,1,0,1,1},
 {1,0,1,0,1,0,1,0,1,0},
 {2,0,2,1,2,0,2,1,2,0},
 {0,0,0,0,0,0,0,0,0,0},
 {2,0,2,1,2,0,2,1,2,0},
 {1,0,1,0,1,0,1,0,1,0},
 {0,1,1,0,1,1,1,0,1,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,1,1,0,1,1,1,0,1,1},
 {1,0,1,0,1,0,1,0,1,0},
 {2,0,2,1,2,0,2,1,2,0},
 {0,0,0,0,0,0,0,0,0,0},
 {2,0,2,1,2,0,2,1,2,0},
 {1,0,1,0,1,0,1,0,1,0},
 {0,1,1,0,1,1,1,0,1,1},};

 unsigned char board16[16][10]= 
{{0,0,0,1,1,1,1,0,0,0},
 {0,2,0,1,1,1,1,0,2,0},
 {2,0,0,1,1,1,1,0,0,2},
 {0,0,0,1,1,1,1,0,0,0},
 {0,0,0,1,1,1,1,0,0,0},
 {0,0,0,2,1,1,2,0,0,0},
 {1,1,2,1,1,1,1,2,1,1},
 {1,1,1,1,0,0,1,1,1,1},
 {1,1,1,1,0,0,1,1,1,1},
 {1,1,2,1,1,1,1,2,1,1}, 
 {0,0,0,2,1,1,2,0,0,0},
 {0,0,0,1,1,1,1,0,0,0}, 
 {0,0,0,1,1,1,1,0,0,0},
 {2,0,0,1,1,1,1,0,0,2},
 {0,2,0,1,1,1,1,0,2,0},
 {0,0,0,1,1,1,1,0,0,0}};
 
 unsigned char board17[16][10]= 
{{0,0,0,1,2,2,1,0,0,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,1,0,0,0,0,0,0,1,0},
 {2,0,0,2,1,1,2,0,0,2},
 {0,0,1,0,0,0,0,1,0,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,2,2,0,0,0,0}, 
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,1,0,0,0,0,1,0,0}, 
 {2,0,0,2,1,1,2,0,0,2},
 {0,1,0,0,0,0,0,0,1,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,0,0,1,2,2,1,0,0,0}};

unsigned char board18[16][10]= 
{{0,1,0,0,1,0,0,1,0,0},  
 {2,2,1,2,2,0,2,2,1,2},
 {0,0,1,0,0,1,0,0,1,0},
 {0,0,1,0,0,1,0,0,1,0}, 
 {2,2,1,2,2,0,2,2,1,2},
 {0,1,0,0,1,0,0,1,0,0},  
 {2,2,1,2,2,0,2,2,1,2},
 {0,0,1,0,0,1,0,0,1,0},
 {0,0,1,0,0,1,0,0,1,0}, 
 {2,2,1,2,2,0,2,2,1,2},
 {0,1,0,0,1,0,0,1,0,0},  
 {2,2,1,2,2,0,2,2,1,2},
 {0,0,1,0,0,1,0,0,1,0},
 {0,0,1,0,0,1,0,0,1,0}, 
 {2,2,1,2,2,0,2,2,1,2},
 {0,1,0,0,1,0,0,1,0,0}};

unsigned char board19[16][10]= 
{{0,1,0,0,0,0,0,0,0,0},  
 {0,0,1,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,0,0,0,0},  
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,2,2,2,0,0,0},
 {0,0,0,2,0,0,0,2,0,0},  
 {0,0,1,0,1,0,1,2,0,0},
 {0,0,0,2,0,0,0,2,0,0},  
 {0,0,0,0,2,2,2,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board20[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0}, 
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0}, 
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,2,0,0,0,0,0,0,0,0}, 
 {0,2,0,0,0,0,0,1,0,0},
 {0,2,0,0,0,0,0,1,0,0},
 {0,2,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,1,0,0}};

unsigned char board21[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}, 
 {0,0,0,0,2,2,0,1,0,0},
 {0,0,0,2,0,0,2,0,0,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,1,0,0,1,1,0,0,2,0}, 
 {0,1,0,0,1,1,0,0,2,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,0,0,2,0,0,2,0,0,0},
 {0,0,0,0,2,2,0,1,0,0}, 
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};
 
unsigned char board22[16][10]= 
{{0,0,0,0,0,1,0,0,0,0},  
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0}, 
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,1,0,0,1,0}, 
 {0,0,0,0,0,1,0,0,1,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0}, 
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,0,1,0,0,0,0}}; 

unsigned char board23[16][10]= 
{{0,0,0,0,0,0,0,0,1,1},  
 {0,0,2,2,0,0,2,2,0,1},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,1,0,0,0,0},
 {0,0,0,0,1,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,2,2,0,0,2,2,0,1},
 {0,0,0,0,0,0,0,0,1,1}};

unsigned char board24[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,2,1,0,0,0},
 {0,2,1,0,0,0,2,1,0,0},
 {0,1,1,0,0,0,0,2,1,0},
 {0,0,0,0,0,0,0,0,1,0},
 {0,0,0,0,0,0,0,0,2,0},
 {0,0,0,0,0,0,0,0,2,0},
 {0,0,0,0,0,0,0,0,1,0},
 {0,1,1,0,0,0,0,2,1,0},
 {0,2,1,0,0,0,2,1,0,0},
 {0,0,0,0,0,2,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board25[16][10]= 
{{0,0,0,2,0,0,0,0,0,0},  
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0},
 {0,0,0,2,0,0,0,0,0,0},
 {0,1,0,2,0,0,0,0,0,0}};

unsigned char board26[16][10]= 
{{0,0,2,0,0,1,0,0,1,0},  
 {0,1,0,0,2,0,0,2,0,0},
 {2,0,0,1,0,0,1,0,0,1},
 {0,0,2,0,0,2,0,0,1,0},
 {0,1,0,0,1,0,0,1,0,0},
 {2,0,0,2,0,0,1,0,0,0},
 {0,0,1,0,0,0,0,0,0,0},
 {0,2,0,0,0,0,0,0,0,0},
 {1,0,0,1,0,0,0,0,0,0},
 {0,0,1,0,0,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,2,0},
 {0,0,0,0,0,0,0,2,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board27[16][10]= 
{{0,0,0,0,1,1,0,0,0,0},  
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {2,0,0,0,0,0,0,0,0,2},
 {1,0,0,0,0,0,0,0,0,1},
 {1,0,0,0,0,0,0,0,0,1},
 {1,1,0,0,0,0,0,0,1,1},
 {1,1,0,0,0,0,0,0,1,1},
 {0,1,1,0,0,0,0,1,1,0},
 {0,1,1,1,2,2,1,1,1,0},
 {0,2,1,1,1,1,1,1,2,0},
 {0,0,0,2,1,1,2,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

 unsigned char board28[16][10]= 
{{0,0,0,0,0,1,0,0,0,0},  
 {0,1,0,0,2,0,0,1,0,0},
 {0,0,2,0,0,0,0,0,2,0},
 {0,0,0,0,1,0,0,0,0,0},
 {0,0,1,0,0,2,0,0,1,0},
 {0,2,0,0,0,0,0,2,0,0},
 {0,0,0,0,0,1,0,0,0,0},  
 {0,1,0,0,2,0,0,1,0,0},
 {0,0,2,0,0,0,0,0,2,0},
 {0,0,0,0,1,0,0,0,0,0},
 {0,0,1,0,0,2,0,0,1,0},
 {0,2,0,0,0,0,0,2,0,0},
 {0,0,0,0,0,1,0,0,0,0},  
 {0,1,0,0,2,0,0,1,0,0},
 {0,0,2,0,0,0,0,0,2,0},
 {0,0,0,0,1,0,0,0,0,0}};
 
unsigned char board29[16][10]= 
{{0,0,0,2,1,1,2,0,2,1},  
 {1,1,0,2,2,2,2,0,2,2},
 {0,0,1,0,0,0,0,1,0,0},
 {2,2,0,2,2,2,2,0,2,2},
 {1,2,0,2,1,1,2,0,2,1},
 {1,2,0,2,1,1,2,0,2,1},
 {2,2,0,2,2,2,2,0,2,2},
 {0,0,1,0,0,0,0,1,0,0},
 {2,2,0,2,2,2,2,0,2,2},
 {1,2,0,2,1,1,2,0,2,1},
 {1,2,0,2,1,1,2,0,2,1},
 {2,2,0,2,2,2,2,0,2,2},
 {0,0,1,0,0,0,0,1,0,0},
 {2,2,0,2,2,2,2,0,2,2},
 {1,2,0,2,1,1,2,0,2,1},
 {1,2,0,2,1,1,2,0,2,1}};
 
unsigned char board30[16][10]= 
{{0,0,0,0,0,0,0,0,0,2},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,1,0,0,0,0,0,0,0},
 {0,0,1,0,0,2,0,0,0,0},
 {0,0,0,0,2,0,0,0,0,0},
 {0,0,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,1,1,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board31[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,1,2,2,1,0,0,0},
 {0,0,2,0,0,0,0,2,0,0},
 {0,1,0,0,0,0,0,0,1,0},
 {2,0,0,2,1,1,2,0,0,2},
 {0,0,1,0,0,0,0,1,0,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,0,0,0,1},
 {0,1,0,0,0,0,0,0,1,0}};

unsigned char board32[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,2,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,2,0,0,0,0,0,0,1,0},
 {0,1,0,0,0,0,0,0,2,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,2,1,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};
 
unsigned char board33[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,2,2,2,0,0,2,2,2,0},
 {0,2,1,1,0,0,1,1,2,0},
 {0,2,1,0,0,0,0,1,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,0,0,1,1,0,0,0,0}, 
 {0,0,0,0,1,1,0,0,0,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,0,0,0,0,0,0,2,0},
 {0,2,1,0,0,0,0,1,2,0},
 {0,2,1,1,0,0,1,1,2,0},
 {0,2,2,2,0,0,2,2,2,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board34[16][10]= 
{{0,0,0,0,0,2,1,1,1,1},  
 {0,0,0,0,0,0,2,0,0,0},
 {0,0,0,0,0,0,0,2,1,1},
 {0,0,0,0,0,0,0,2,1,1},
 {0,0,0,0,0,0,0,2,1,1},
 {0,0,0,0,0,0,0,2,1,1},
 {0,0,0,0,1,1,0,0,0,0},
 {0,0,0,0,2,2,1,0,0,2},
 {0,0,0,0,2,2,1,0,0,2},
 {1,0,0,0,1,1,0,0,0,2},
 {1,1,0,0,0,0,0,0,0,2},
 {1,1,1,0,0,0,0,0,0,2},
 {1,1,1,1,1,0,0,0,0,2},
 {1,0,1,1,1,1,1,0,0,2},
 {1,0,1,1,1,1,1,1,0,2},
 {1,1,1,1,1,1,1,1,0,2}};
 
unsigned char board35[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,1,2,1,2,1,2,1,2,1},
 {0,0,0,0,0,0,0,0,0,0}, 
 {1,2,1,2,1,2,1,2,1,2},
 {0,0,0,0,0,0,0,0,0,0},
 {1,1,1,1,1,1,1,1,1,1},
 {2,2,2,2,0,0,2,2,2,2}, 
 {1,1,1,1,1,1,1,1,1,1},
 {0,0,0,2,0,0,2,0,0,0},
 {1,1,1,1,1,1,1,1,1,1},
 {0,0,2,0,0,0,0,2,0,0}, 
 {1,1,1,1,1,1,1,1,1,1},
 {0,2,0,0,0,0,0,0,2,0},
 {1,1,1,1,1,1,1,1,1,1},
 {2,0,0,0,0,0,0,0,0,2}};

unsigned char board36[16][10]= 
{{0,2,1,0,0,0,0,0,0,2},  
 {0,0,2,0,0,0,1,0,2,2},
 {2,0,0,0,0,0,0,2,2,1},
 {1,2,0,0,0,0,2,2,0,0},
 {0,0,0,0,0,2,2,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,2,2,2,2,0,0,2},
 {0,0,1,0,1,0,2,0,0,1},
 {0,0,1,0,1,0,0,0,0,1},
 {0,0,0,2,2,2,2,1,0,2},
 {0,0,0,0,2,2,0,0,1,0},
 {0,0,0,0,0,2,2,0,0,0},
 {2,0,0,0,0,0,2,2,0,0},
 {0,1,0,0,0,0,0,2,2,0},
 {0,1,0,0,0,0,1,0,2,2},
 {0,2,0,0,0,0,0,0,0,2}};

unsigned char board37[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,1,0,0,0,0,1,0,0},
 {0,1,0,0,0,0,0,0,1,0},
 {0,0,0,2,0,0,2,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,1,0,0,0,0},
 {0,0,0,1,2,2,0,0,0,0},
 {0,0,0,0,2,2,1,0,0,0},
 {0,0,0,0,1,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,2,0,0,2,0,0,0},
 {0,1,0,0,0,0,0,0,1,0},
 {0,0,1,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,0,0,0}};

unsigned char board38[16][10]=
{{0,1,0,1,0,0,0,0,0,2},  
 {0,0,1,0,2,1,2,0,0,2},
 {2,0,0,2,0,0,0,1,0,0},
 {2,0,2,0,1,0,0,2,0,0},
 {0,0,2,2,0,2,2,2,0,0},
 {0,2,1,0,0,0,0,1,2,0},
 {0,2,0,0,2,1,0,0,2,0},
 {0,1,0,2,0,0,1,0,2,0},
 {0,2,0,1,0,0,2,0,1,0},
 {0,2,1,0,1,2,2,0,2,0},
 {0,2,2,0,0,0,0,2,1,0},
 {0,0,2,2,2,1,2,1,2,1},
 {0,0,0,0,0,0,1,2,1,2},
 {1,0,0,1,0,0,0,1,2,1},
 {0,1,0,0,1,0,0,0,1,2},
 {0,0,0,0,0,0,0,0,0,1}}; 

unsigned char board39[16][10]=
{{0,0,0,0,0,0,0,0,0,0},  
 {0,2,0,0,0,0,0,0,2,0},
 {0,0,2,0,1,1,0,2,0,0},
 {0,1,0,2,0,0,2,0,1,0},
 {0,1,0,0,1,1,0,0,1,0},
 {1,0,0,0,0,0,0,0,0,1},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,2,0,0,1,0},
 {0,0,0,0,1,0,1,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,1,1,0,0,2,0},
 {0,2,0,0,0,0,0,2,0,2},
 {2,0,2,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,1,0,0,0}}; 
 
unsigned char board40[16][10]=
{{0,0,0,2,2,2,2,2,0,0},  
 {0,0,1,1,1,1,1,0,0,0},
 {0,2,2,2,2,2,0,0,0,0},
 {0,1,1,1,1,0,0,0,0,0},
 {2,2,2,2,0,0,0,0,0,0},
 {1,1,1,0,0,0,0,0,0,0},
 {2,2,0,0,0,0,0,0,0,0},
 {1,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,2,0,0,0,0},
 {0,0,0,0,2,0,0,0,0,0},
 {0,0,0,0,2,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,2},
 {0,2,0,0,0,0,0,0,2,0},
 {2,0,0,0,0,0,0,0,2,0},
 {2,0,0,0,0,0,0,0,0,0}};
/////////////////////////////////////////////////////////////
/*unsigned char board41[16][10]= 
{{0,0,0,0,0,0,0,0,0,0},  
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,0,2,2,0,0,0,0},
 {0,0,0,1,0,0,1,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0}};*/

/*
typedef struct { 
 unsigned short int lvl_pos[10]; 
 unsigned char screen[16][10]; 
} board;
*/