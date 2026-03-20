/*
 * Program: n42.bin
 * Function: FUN_001e4700
 * Entry: 001e4700
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001e4700(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  
  if (_DAT_00fe16d8 != 0) {
    puVar5 = (undefined4 *)&DAT_003fb860;
    iVar3 = ((int)_DAT_00fe16d0 >> 1) + (uint)((int)_DAT_00fe16d0 < 0 && (_DAT_00fe16d0 & 1) != 0);
    iVar2 = _DAT_00fe16d8;
    do {
      iVar8 = *(int *)(&DAT_00fe5bf4 + puVar5[1] * 4);
      puVar6 = (undefined2 *)*puVar5;
      *puVar6 = *(undefined2 *)(puVar5 + 4);
      puVar6[1] = *(undefined2 *)((int)puVar5 + 0x12);
      puVar6[2] = 0xc;
      uVar7 = puVar5[2];
      uVar1 = uVar7 * 2;
      uVar4 = 3 << (uVar1 & 0x3f);
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & ~uVar4;
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 0 << (uVar1 & 0x3f);
      if ((int)uVar7 < iVar3) {
        *(uint *)(iVar8 + 0x10) = *(uint *)(iVar8 + 0x10) & ~(0xf << ((uVar7 & 0xf) << 2));
        *(uint *)(iVar8 + 0x10) = *(uint *)(iVar8 + 0x10) | 0xf << ((uVar7 & 0xf) << 2);
      }
      else {
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) & ~(0xf << ((uVar7 - iVar3) * 4 & 0x3c));
        *(uint *)(iVar8 + 0xc) = *(uint *)(iVar8 + 0xc) | 0xf << ((uVar7 - iVar3) * 4 & 0x3c);
      }
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) & ~uVar4;
      *(uint *)(iVar8 + 0x18) = *(uint *)(iVar8 + 0x18) | 1 << (uVar1 & 0x3f);
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) & ~uVar4;
      *(uint *)(iVar8 + 0x1c) = *(uint *)(iVar8 + 0x1c) | 2 << (uVar1 & 0x3f);
      puVar5 = puVar5 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

