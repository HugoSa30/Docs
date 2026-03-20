/*
 * Program: n42.bin
 * Function: FUN_000a2c04
 * Entry: 000a2c04
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a2c04(undefined4 param_1)

{
  byte bVar1;
  undefined4 unaff_r28;
  undefined2 *unaff_r29;
  undefined2 *unaff_r30;
  byte bVar2;
  
  FUN_000a3858(param_1,unaff_r28);
  bVar2 = 0;
  FUN_000a4154();
  do {
    FUN_000a4154();
    bVar1 = FUN_000a411c(*unaff_r30);
    bVar2 = bVar2 + 1;
  } while ((bVar1 >> 5 & 1) == 0 && bVar2 < 0xf);
  *unaff_r29 = *unaff_r30;
  FUN_000a2190();
  return;
}

