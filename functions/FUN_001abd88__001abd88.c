/*
 * Program: n42.bin
 * Function: FUN_001abd88
 * Entry: 001abd88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001abd88(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = 0;
  while ((*(int *)(_DAT_003fc5a8 + (uint)uVar5 * 0xc) == 0 ||
         (*(int *)(&UNK_003fc44c + (uint)uVar5 * 0x70) < 3))) {
    uVar5 = uVar5 + 1;
    if (3 < uVar5) {
      uVar3 = 0;
      do {
        iVar4 = uVar3 * 0xc;
        if (*(int *)(_DAT_003fc5a8 + iVar4) != 0) {
          cVar1 = (*(code *)&SUB_00fabc28)(uVar3);
          if (cVar1 == '\0') {
            return 0;
          }
          (*(code *)&SUB_00fb2c10)();
          iVar2 = uVar3 * 0x70;
          (&UNK_003fc3fd)[iVar2] = 0;
          uVar6 = 0;
          do {
            *(undefined2 *)(&UNK_003fc436 + iVar2 + uVar6 * 2) = 0;
            uVar6 = uVar6 + 1 & 0xffff;
          } while (uVar6 < 8);
          (&UNK_003fc448)[iVar2] = 0;
          (&UNK_003fc44a)[iVar2] = 0;
          *(undefined2 *)(&UNK_003fc446 + iVar2) = 7;
          *(undefined4 *)(&UNK_003fc44c + iVar2) = 3;
          *(undefined4 *)(&UNK_003fc414 + iVar2) = 0x66e7c;
          *(undefined4 *)(&UNK_003fc418 + iVar2) = 0x672c0;
          *(undefined4 *)(&UNK_003fc41c + iVar2) = 0x672b8;
          (&UNK_003fc44b)[iVar2] = *(undefined *)((int)_DAT_003fc3e0 + uVar3 + 0xc);
          *(undefined2 *)(&UNK_003fc434 + iVar2) = 0;
          *(undefined4 *)(&UNK_003fc3e8 + iVar2) = 0;
          *(undefined4 *)(&UNK_003fc3ec + iVar2) = 0;
          (&UNK_003fc455)[iVar2] = 0;
          uVar6 = (uint)*(byte *)(_DAT_003fc5a8 + iVar4 + 8) * 2;
          *(uint *)(*(int *)(_DAT_003fc5a8 + iVar4) + 0x14) =
               *(uint *)(*(int *)(_DAT_003fc5a8 + iVar4) + 0x14) & ~(3 << (uVar6 & 0x3f)) |
               0 << (uVar6 & 0x3f);
          (*(code *)&SUB_00faf2d0)
                    (*(undefined4 *)(_DAT_003fc5a8 + iVar4),
                     *(undefined *)(_DAT_003fc5a8 + iVar4 + 8),0xc);
          uVar6 = (uint)*(byte *)(_DAT_003fc5a8 + iVar4 + 8);
          iVar2 = *(int *)(_DAT_003fc5a8 + iVar4);
          *(int *)(iVar2 + 0x18) = 3 << (uVar6 * 2 & 0x3f);
          (*(code *)&SUB_00faf170)(iVar2,uVar6,1);
          (*(code *)&SUB_00faf214)
                    (*(undefined4 *)(_DAT_003fc5a8 + iVar4),
                     *(undefined *)(_DAT_003fc5a8 + iVar4 + 8),2);
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < 4);
      return 1;
    }
  }
  if ((_DAT_003fc3e0 != (code **)0x0) && (*_DAT_003fc3e0 != (code *)0x0)) {
    (**_DAT_003fc3e0)(4,0x3c,uVar5);
  }
  return 0;
}

