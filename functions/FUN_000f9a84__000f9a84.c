/*
 * Program: n42.bin
 * Function: FUN_000f9a84
 * Entry: 000f9a84
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f9a84(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  
  uVar3 = param_3 & 0xff;
  if (uVar3 < 4) {
    if (1 < *(int *)(&UNK_003fc888 + uVar3 * 0x10)) {
      iVar5 = param_3 * 0xc;
      uVar3 = (uint)*(byte *)(_DAT_003fc884 + iVar5 + 8) * 2;
      *(uint *)(*(int *)(_DAT_003fc884 + iVar5) + 0x14) =
           *(uint *)(*(int *)(_DAT_003fc884 + iVar5) + 0x14) & ~(3 << (uVar3 & 0x3f)) |
           (param_1 & 3) << (uVar3 & 0x3f);
      *(uint *)(&UNK_003fc890 + param_3 * 0x10) = param_1;
      (&UNK_003fc894)[param_3 * 0x10] = (char)param_2;
      if (param_2 == 1) {
        if (*(undefined **)(_DAT_003fc884 + iVar5) == &DAT_00304000) {
          (*(code *)&SUB_00faf874)(0x69e64,2,&DAT_00304000,8);
        }
        if (*(undefined **)(_DAT_003fc884 + iVar5) == &DAT_00304400) {
          (*(code *)&SUB_00faf874)(0x69e2c,2,&DAT_00304400,8);
        }
        uVar3 = (uint)*(byte *)(_DAT_003fc884 + iVar5 + 8);
        iVar5 = *(int *)(_DAT_003fc884 + iVar5);
        *(ushort *)(iVar5 + 0x20) = ~(ushort)(1 << (uVar3 & 0x3f));
        (*(code *)&SUB_00faf170)(iVar5,uVar3,1);
      }
      else {
        (*(code *)&SUB_00faf170)
                  (*(undefined4 *)(_DAT_003fc884 + iVar5),*(undefined *)(_DAT_003fc884 + iVar5 + 8),
                   param_2);
        *(ushort *)(*(int *)(_DAT_003fc884 + iVar5) + 0x20) =
             ~(ushort)(1 << (*(byte *)(_DAT_003fc884 + iVar5 + 8) & 0x3f));
        bVar2 = false;
        bVar1 = false;
        uVar3 = 0;
        do {
          if ((&UNK_003fc894)[uVar3 * 0x10] == '\x01') {
            puVar4 = *(undefined **)(_DAT_003fc884 + uVar3 * 0xc);
            if (puVar4 == &DAT_00304000) {
              bVar1 = true;
            }
            if (puVar4 == &DAT_00304400) {
              bVar2 = true;
            }
          }
          uVar3 = uVar3 + 1 & 0xff;
        } while (uVar3 < 4);
        if (!bVar1) {
          (*(code *)&SUB_00fafa2c)(8);
        }
        if (!bVar2) {
          (*(code *)&SUB_00fafa78)(8);
        }
      }
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35,uVar3);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33,uVar3);
  }
  return 0;
}

