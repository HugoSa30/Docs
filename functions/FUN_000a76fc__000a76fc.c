/*
 * Program: n42.bin
 * Function: FUN_000a76fc
 * Entry: 000a76fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000a76fc(undefined4 param_1,int param_2,undefined4 *param_3)

{
  char cVar2;
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((param_2 == -1) || (cVar2 = func_0x00f9a180(param_1,param_2,1,1), cVar2 != '\0')) {
    local_18 = *param_3;
    local_14 = param_3[1];
    cVar2 = func_0x01034230(param_1,&local_18);
    if (cVar2 == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

