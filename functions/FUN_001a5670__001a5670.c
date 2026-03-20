/*
 * Program: n42.bin
 * Function: FUN_001a5670
 * Entry: 001a5670
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a5670(void)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined local_18 [8];
  
  if (DAT_003fbd80 != '\0') {
    DAT_005baa0c = 0;
    DAT_005baa0a = *(undefined *)(_DAT_003fbd7c + 0xc);
    uVar1 = FUN_0010b194();
    DAT_005baa09 = (byte)uVar1;
    iVar2 = FUN_001a54d8();
    DAT_005baa08 = (byte)iVar2;
    if (iVar2 < (int)(uVar1 & 0xff)) {
      if (**(char **)(_DAT_003fbd7c + 8) == '\x10') {
        iVar2 = FUN_001a5304(local_18);
        if (iVar2 == 0) {
          puVar3 = *(undefined **)*_DAT_003fbd84;
          DAT_003fbda6 = *(undefined *)(_DAT_003fbd7c + 4);
          _DAT_003fbda0 = puVar3;
          *puVar3 = 0x7f;
          puVar3[1] = 0x10;
          puVar3[2] = local_18[0];
          _DAT_003fbd84 = (undefined4 *)&DAT_003fbd9c;
          DAT_003fbd88 = 1;
          _DAT_003fbda4 = 3;
          DAT_003fbda7 = 1;
          DAT_005baa04 = 0xfa5670;
          return;
        }
        DAT_005baa0c = 1;
      }
      if (DAT_005baa08 < DAT_005baa09) {
        do {
          iVar2 = FUN_001a4a64(DAT_005baa08);
          if (iVar2 != 1) {
            if (iVar2 != 4) {
              DAT_005baa04 = 0xfa57f8;
              return;
            }
            DAT_003fbd88 = 0;
            return;
          }
          FUN_001a5520(&DAT_005baa08);
        } while (DAT_005baa08 < DAT_005baa09);
      }
      FUN_001a55d8();
    }
  }
  return;
}

