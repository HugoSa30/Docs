/*
 * Program: n42.bin
 * Function: FUN_0009562c
 * Entry: 0009562c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0009562c(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if (DAT_001c0302 == param_2) {
    param_1[6] = '\x04';
    *param_1 = '\x03';
    cVar1 = '\0';
  }
  else {
    uVar2 = param_2 >> 6 & 3;
    cVar1 = (char)(param_2 & 0x3f);
    if (uVar2 == 0) {
      param_1[6] = '\x01';
      *param_1 = '\x01';
    }
    else if (uVar2 == 2) {
      param_1[6] = '\x02';
      *param_1 = '\x03';
    }
    else if (uVar2 == 3) {
      param_1[6] = '\x03';
      *param_1 = '\x03';
    }
    else {
      param_1[6] = '\0';
    }
    if ((param_2 & 0x3f) == 0) {
      *param_1 = *param_1 + '\x01';
    }
  }
  param_1[1] = cVar1;
  return;
}

