/*
 * Program: n42.bin
 * Function: FUN_00093570
 * Entry: 00093570
 * Exported by: ExportAllDecompiledFunctions.java
 */


short FUN_00093570(int param_1,int param_2,uint param_3)

{
  short sVar1;
  
  sVar1 = FUN_00093310(param_2,param_2 + param_3 * 4,0);
  while ((0 < (int)param_3 && (sVar1 == 0))) {
    FUN_00097358();
    if ((int)param_3 < 0x40) {
      sVar1 = FUN_00093374(param_1,(param_3 & 0x3fff) << 2);
      param_3 = 0;
    }
    else {
      sVar1 = FUN_00093374(param_1,0x100);
      param_1 = param_1 + 0x100;
      param_3 = param_3 - 0x40;
    }
  }
  return sVar1;
}

