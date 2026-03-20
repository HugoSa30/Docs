/*
 * Program: n42.bin
 * Function: FUN_001ad8d0
 * Entry: 001ad8d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ad8d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (_DAT_003fc2f8 < 9) {
    uVar1 = 0;
  }
  else {
    if (param_1 == 0) {
      *(uint *)(_DAT_003fc2ec + 0x14) =
           *(uint *)(_DAT_003fc2ec + 0x14) & 0xfffffffc | (uint)(param_2 == 1);
      *(undefined4 *)(_DAT_003fc2ec + 0x18) = 1;
    }
    else {
      *(uint *)(_DAT_003fc2e0 + 0x14) =
           *(uint *)(_DAT_003fc2e0 + 0x14) & 0xfffffffc | (uint)(param_2 == 1);
      *(undefined4 *)(_DAT_003fc2e0 + 0x18) = 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

