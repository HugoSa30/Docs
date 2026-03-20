/*
 * Program: n42.bin
 * Function: FUN_00124a2c
 * Entry: 00124a2c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_00124a2c(int param_1,undefined4 param_2,int param_3,undefined2 *param_4,undefined *param_5)

{
  char cVar2;
  undefined2 uVar1;
  
  *param_5 = 0;
  cVar2 = FUN_001223e8();
  if (cVar2 == '\0') {
    cVar2 = FUN_001222d0(param_1,param_1 + param_3 + -1);
    if (cVar2 != '\0') {
      *param_5 = 0x32;
      return 0;
    }
  }
  else {
    cVar2 = FUN_001223e8();
    if (cVar2 == '\x02') {
      uVar1 = FUN_001223f4();
      *param_4 = uVar1;
      return 0;
    }
  }
  return 1;
}

