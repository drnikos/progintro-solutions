    #include "pzhelp"  
      
    PROGRAM {  
      int a = READ_INT();  
      int b = READ_INT();  
      SKIP_LINE();  
      int c = READ_INT();  
      int d = READ_INT();  
      a *= d;  
      c *= b;  
      int arithmitis = a + c;  
      int paronomastis = b * d;  
      WRITELN(arithmitis, paronomastis);  
    }  
