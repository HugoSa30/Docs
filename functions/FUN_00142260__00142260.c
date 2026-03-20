/*
 * Program: n42.bin
 * Function: FUN_00142260
 * Entry: 00142260
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00142260(undefined param_1)

{
  char cVar1;
  int in_r12;
  undefined unaff_r26;
  undefined unaff_r27;
  byte *unaff_r29;
  undefined *unaff_r31;
  
  *(undefined *)(in_r12 + -0x73f7) = param_1;
  if ((DAT_005bb7c2 & 1) != 0) {
    _twslp_w = FUN_00141f28();
  }
  cVar1 = FUN_00142044();
  if (cVar1 == '\x02') {
    *unaff_r31 = unaff_r27;
  }
  else {
    *unaff_r31 = unaff_r26;
  }
  while (6 < *unaff_r29) {
    *unaff_r29 = 0;
    unaff_r29 = &DAT_005bb7c1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0014214c */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*unaff_r29 * 4 + 0xf42158))();
  return;
}

