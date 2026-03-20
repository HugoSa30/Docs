/*
 * Program: n42.bin
 * Function: FUN_001ab22c
 * Entry: 001ab22c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001ab22c(byte *param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  bVar1 = *param_1;
  iVar5 = (uint)bVar1 * 3;
  if ((uint)*(byte *)(iVar5 + 0x175d4) == (uint)bVar1) {
    uVar2 = *(undefined *)(iVar5 + 0x175d5);
    (*(code *)&SUB_00015d64)(uVar2);
    if (bVar1 == 1) {
      if (param_1[1] == 1) {
        (*(code *)&SUB_000161b0)(uVar2,0);
      }
      else {
        (*(code *)&SUB_000161b0)(uVar2,1);
      }
      uVar3 = bVar1 + 0xff & 0xff;
      iVar6 = uVar3 * 0x14;
      (&UNK_003fa384)[iVar6] = *param_1;
      (&UNK_003fa385)[iVar6] = param_1[1];
      *(undefined2 *)(&UNK_003fa386 + iVar6) = *(undefined2 *)(param_1 + 2);
      *(undefined2 *)(&UNK_003fa388 + iVar6) = *(undefined2 *)(param_1 + 4);
      *(undefined4 *)(&UNK_003fa38c + iVar6) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(&UNK_003fa390 + iVar6) = *(undefined4 *)(param_1 + 0xc);
      *(undefined2 *)(&UNK_003fa394 + iVar6) = *(undefined2 *)(param_1 + 0x10);
      (*(code *)&SUB_00015dd8)(uVar2,0);
      if (*(char *)(iVar5 + 0x175d6) == '\0') {
        (*(code *)&SUB_00016220)(uVar2,0);
      }
      else {
        (*(code *)&SUB_00016220)(uVar2,1);
      }
      (*(code *)&SUB_000161e0)(uVar2,1);
      _DAT_003fa3a8 = *(ushort *)(&UNK_003fa394 + iVar6);
      *(uint *)(&UNK_003fa380 + uVar3 * 4) =
           (uint)*(ushort *)(&UNK_003fa388 + iVar6) * (uint)_DAT_003fa3a8;
      *(undefined2 *)(&UNK_003fa374 + uVar3 * 2) = 0;
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}

