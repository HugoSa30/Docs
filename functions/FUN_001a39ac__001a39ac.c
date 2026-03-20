/*
 * Program: n42.bin
 * Function: FUN_001a39ac
 * Entry: 001a39ac
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001a39ac(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  param_1 = param_1 * 5;
  uVar2 = (uint)*(byte *)(param_1 + 0xf2321b);
  if (uVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0xf2321a);
    iVar4 = (int)(uint)bVar1 >> 3;
    iVar3 = _DAT_003fae80 + (uint)*(byte *)(param_1 + 0xf23218) * 0x14;
    uVar5 = *(uint *)(iVar3 + iVar4);
    *(undefined *)(param_2 + 1) = *(undefined *)(iVar3 + 0xf);
    if (*(char *)(param_1 + 0xf23219) == '\x02') {
      uVar5 = (uVar5 << 0x18 | uVar5 >> 0x18 | uVar5 >> 8 & 0xff00 | (uVar5 & 0xff00) << 8) >>
              ((uint)bVar1 + iVar4 * -8 & 0x3f) & (1 << (uVar2 & 0x3f)) - 1U;
    }
    else if (uVar2 == 8) {
      uVar5 = uVar5 >> 0x18;
    }
    else if (uVar2 == 0x10) {
      uVar5 = uVar5 >> 0x10;
    }
    else if (uVar2 != 0x20) goto LAB_001a3a74;
    *param_2 = uVar5;
  }
LAB_001a3a74:
  return *(undefined *)(param_2 + 1);
}

