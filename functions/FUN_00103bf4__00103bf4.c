/*
 * Program: n42.bin
 * Function: FUN_00103bf4
 * Entry: 00103bf4
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_00103bf4(void)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  
  uVar1 = 0xffffffff;
  bVar3 = 0;
  puVar2 = (uint *)0xffe1fc;
  do {
    puVar2 = puVar2 + 1;
    uVar1 = uVar1 & *puVar2;
    bVar3 = bVar3 + 1;
  } while (bVar3 < 0x10);
  return uVar1 == 0xffffffff;
}

