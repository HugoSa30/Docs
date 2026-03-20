/*
 * Program: n42.bin
 * Function: FUN_0010e368
 * Entry: 0010e368
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010e368(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_003fffa4 == '\0') {
    _DAT_003fffc8 = FUN_00108000(*_DAT_003fba9c,param_1,&DAT_003fbaec);
    iVar2 = FUN_0010e334(param_1,_DAT_003fffc8,*(undefined2 *)(_DAT_003fba9c + 4));
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

