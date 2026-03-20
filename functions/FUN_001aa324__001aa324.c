/*
 * Program: n42.bin
 * Function: FUN_001aa324
 * Entry: 001aa324
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001aa324(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  undefined local_20 [8];
  
  DAT_003fa213 = 0;
  uVar4 = 0;
  if (DAT_00016ec8 != 0) {
    do {
      bVar5 = 0;
      iVar3 = uVar4 * 0x2c;
      (*(code *)&SUB_00013938)(*(undefined2 *)(iVar3 + 0x16e8c),iVar3 + 0x16e8e,local_20);
      (*(code *)&SUB_00013858)(*(undefined2 *)(iVar3 + 0x16e8c),local_20);
      (*(code *)&SUB_00014154)();
      do {
        (*(code *)&SUB_00014154)();
        uVar1 = (*(code *)&SUB_0001411c)(*(undefined2 *)(iVar3 + 0x16e8c));
        bVar5 = bVar5 + 1;
      } while ((uVar1 >> 5 & 1) == 0 && bVar5 < 0xf);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < DAT_00016ec8);
  }
  uVar4 = 0;
  uVar1 = (uint)DAT_000174f0;
  if (uVar1 != 0) {
    do {
      *(undefined2 *)(&UNK_003fa5ba + uVar4 * 2) = 0;
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar1);
  }
  uVar4 = 0;
  if (DAT_000174f1 != 0) {
    do {
      iVar3 = uVar4 * 8;
      cVar2 = (*(code *)&SUB_00013af0)
                        (*(undefined2 *)(iVar3 + 0x174b0),1,*(undefined *)(iVar3 + 0x174b2),
                         *(undefined4 *)(iVar3 + 0x174b4),local_20);
      if (cVar2 == '\0') {
        DAT_003fa213 = local_20[0];
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < DAT_000174f1);
  }
  return;
}

