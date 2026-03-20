/*
 * Program: n42.bin
 * Function: FUN_00098380
 * Entry: 00098380
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098380(void)

{
  int iVar1;
  int unaff_r26;
  int unaff_r27;
  uint unaff_r29;
  int iVar2;
  uint uVar3;
  
  do {
    uVar3 = (uint)*(byte *)(unaff_r26 + unaff_r29);
    iVar2 = _DAT_003fae80 + uVar3 * 0x14;
    if ((*(char *)(iVar2 + 0xd) != '\0') && (*(char *)(iVar2 + 10) != '\x02')) {
      iVar1 = _DAT_003faf10 + uVar3 * 0x18;
      if (((&UNK_003fae78)[*(byte *)(iVar1 + 0x11)] == '\0') && (*(char *)(iVar2 + 0xe) == '\x01'))
      {
        iVar2 = func_0x00f9a8ec(iVar1 + 0xc);
        if (iVar2 == 1) {
          iVar2 = _DAT_003faf10 + uVar3 * 0x18;
          FUN_000981f0((&UNK_003fae84)
                       [((uint)*(byte *)(iVar2 + 0x12) + (uint)*(byte *)(iVar2 + 0x11) * 0x10) * 2])
          ;
        }
        else {
          FUN_00098294(uVar3);
          if (_DAT_003f9acc != (code *)0x0) {
            (*_DAT_003f9acc)(uVar3);
          }
        }
      }
    }
    unaff_r29 = unaff_r29 + 1 & 0xff;
  } while ((int)unaff_r29 <= unaff_r27);
  return;
}

