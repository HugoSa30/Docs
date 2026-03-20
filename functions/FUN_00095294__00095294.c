/*
 * Program: n42.bin
 * Function: FUN_00095294
 * Entry: 00095294
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_00095294(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  
  uVar2 = 0;
  do {
    iVar1 = *(int *)(&DAT_003fa1c8 + uVar2 * 4);
    puVar3 = (uint *)(iVar1 + 8);
    *puVar3 = *puVar3 & 0xfffffffe;
    iVar4 = 200;
    do {
      if ((*(uint *)(iVar1 + 8) & 0x80000000) == 0) break;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (iVar4 == 0) {
      return 0x92;
    }
    uVar2 = uVar2 + 1 & 0xffff;
    if (1 < uVar2) {
      FUN_000945a8();
      uVar2 = 0;
      do {
        **(uint **)(&DAT_003fa1c8 + uVar2 * 4) = **(uint **)(&DAT_003fa1c8 + uVar2 * 4) | 0xff;
        uVar2 = uVar2 + 1 & 0xffff;
      } while (uVar2 < 2);
      DAT_003fa17a = 0;
      return 0;
    }
  } while( true );
}

