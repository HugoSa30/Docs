/*
 * Program: n42.bin
 * Function: FUN_001e55b4
 * Entry: 001e55b4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e55b4(void)

{
  char cVar1;
  
  FUN_001e2e0c();
  if (_DAT_003fb854 == 1) {
    FUN_001e5400(&DAT_003fbad2);
  }
  FUN_001e2eec();
  FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,0);
  FUN_001e15ec();
  if (((DAT_003fb9ac & 1) == 1) && ((DAT_003fbac0 & 1) == 0)) {
    DAT_003fbac0 = DAT_003fbac0 | 1;
    if ((DAT_003fb898 >> 1 & 1) == 1) {
      DAT_003fb898 = DAT_003fb898 | 4;
    }
    _DAT_003fb858 = 1;
  }
  if (((DAT_003fb9ac & 1) == 0) && ((DAT_003fbac0 & 1) == 1)) {
    DAT_003fbac0 = DAT_003fbac0 & 0xfe;
    if ((DAT_003fb898 >> 1 & 1) == 1) {
      DAT_003fb898 = DAT_003fb898 & 0xfb;
    }
    _DAT_003fb858 = 1;
  }
  if ((_DAT_003fb858 == 4) && ((DAT_003fbac0 >> 1 & 1) == 0)) {
    _DAT_003fb858 = 1;
  }
  if ((DAT_003fb9ac >> 1 & 1) == 1) {
    DAT_003fb9ad = 2;
    DAT_003fb9ae = DAT_003fb9ae + -2;
    DAT_003fbad6 = DAT_003fb9c2;
    DAT_003fbad7 = DAT_00fe1800;
    DAT_003fbac2 = 2;
    DAT_003fbac1 = 2;
    cVar1 = FUN_001e5034(&DAT_003fb9ac,&DAT_003fbac0,&DAT_003fb899);
    if (cVar1 == '\x01') {
      if (_DAT_003fb854 == 1) {
        FUN_001e4700();
      }
    }
    else {
      DAT_003fbad7 = 0x10;
      DAT_003fbac2 = 2;
      DAT_003fbac0 = DAT_003fbac0 | 4;
    }
    DAT_003fb9ac = DAT_003fb9ac & 0xfd;
    DAT_003fbac0 = DAT_003fbac0 | 2;
    _DAT_003fb858 = 4;
  }
  FUN_001e2e0c();
  return;
}

