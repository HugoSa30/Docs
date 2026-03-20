/*
 * Program: n42.bin
 * Function: FUN_000a6290
 * Entry: 000a6290
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a6290(undefined4 param_1,undefined param_2,int param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 local_1c [5];
  
  if (param_6 == 0xff) {
    uVar1 = CONCAT22((short)param_3,(short)((param_4 * param_3) / 10000));
    cVar2 = FUN_000a606c(param_2);
    local_1c[0] = uVar1;
    if (cVar2 == '\0') {
      FUN_000a5dd8(param_2,0);
      FUN_000a5fbc(param_2,local_1c);
      FUN_000a5dd8(param_2,param_5);
      FUN_000a5d64(param_2);
    }
    else {
      FUN_000a6050(param_2,local_1c);
    }
  }
  else {
    FUN_000a5fec(param_2,param_6);
  }
  return;
}

