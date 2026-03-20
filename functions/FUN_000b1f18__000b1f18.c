/*
 * Program: n42.bin
 * Function: FUN_000b1f18
 * Entry: 000b1f18
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000b1f18(char *param_1,int param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_1;
  if (param_2 == 0) {
    if (cVar1 != '\0') {
      *param_1 = cVar1 + -1;
    }
  }
  else {
    *param_1 = param_3;
  }
  if ((param_2 == 0) && (cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

