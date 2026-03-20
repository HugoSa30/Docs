/*
 * Program: n42.bin
 * Function: FUN_0009aadc
 * Entry: 0009aadc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009aadc(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_MSR;
  
  uVar6 = 0;
  if (DAT_00016ab2 != 0) {
    do {
      uVar5 = 0;
      iVar2 = uVar6 * 4;
      bVar1 = *(byte *)(iVar2 + 0x16855 + param_1);
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa10c = _DAT_003fa10c + 1;
      if (bVar1 != 0) {
        FUN_00099d34(*(undefined4 *)(uVar6 * 8 + 0x16aa0),bVar1,uVar6);
        uVar4 = uVar6 * 2;
        if ((bVar1 & 1) != 0) {
          iVar3 = uVar6 * 4;
          (&UNK_003fa3b2)[iVar3] = (&UNK_003fa3b2)[iVar3] + -1;
          if ((&UNK_003fa3b2)[iVar3] == '\0') {
            FUN_00099d8c(*(undefined4 *)(uVar6 * 8 + 0x16aa0),1);
            (&UNK_003fa3b2)[iVar3] = *(undefined *)(iVar2 + 0x16857);
            DAT_003fa124 = DAT_003fa124 & ~(byte)(1 << (uVar4 + 1 & 0x3f));
          }
          uVar5 = (uint)(byte)(&UNK_003fa3b0)[uVar6 * 4] * 2;
        }
        if ((bVar1 & 2) != 0) {
          iVar3 = uVar6 * 4;
          (&UNK_003fa3b3)[iVar3] = (&UNK_003fa3b3)[iVar3] + -1;
          if ((&UNK_003fa3b3)[iVar3] == '\0') {
            FUN_00099d8c(*(undefined4 *)(uVar6 * 8 + 0x16aa0),2);
            (&UNK_003fa3b3)[iVar3] = *(undefined *)(iVar2 + 0x16858);
            DAT_003fa124 = DAT_003fa124 & ~(byte)(1 << (uVar4 & 0x3f));
          }
          uVar5 = uVar5 | (byte)(&UNK_003fa3b1)[iVar3];
        }
        DAT_003fa124 = DAT_003fa124 | (byte)(uVar5 << (uVar4 & 0x3f));
      }
      _DAT_003fa10c = _DAT_003fa10c + -1;
      uVar6 = uVar6 + 1 & 0xff;
    } while (uVar6 < DAT_00016ab2);
  }
  return;
}

