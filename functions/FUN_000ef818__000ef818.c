/*
 * Program: n42.bin
 * Function: FUN_000ef818
 * Entry: 000ef818
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000ef818(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  
  if (B_stend == '\0') {
    DAT_005b9b00 = 0x2000;
    DAT_003fc0f7 = '\0';
  }
  else {
    uVar6 = (uint)nstat;
    uVar7 = uVar6 * 0x28;
    sVar5 = ((ushort)nwem_out + (ushort)DAT_001c8802) * 0xa0;
    uVar1 = FUN_000b1538(sVar5,nmot_w);
    uVar1 = FUN_000b162c(uVar1,0x2000);
    uVar2 = FUN_000b1538(sVar5,uVar7);
    iVar3 = FUN_000b16e4(uVar1,uVar2);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    DAT_005b9b04 = (short)iVar3;
    iVar4 = FUN_000b16e4(uVar6 * 0x50000,nmot_w);
    DAT_005b9b02 = (undefined2)iVar4;
    if ((DAT_003fc0f7 == '\0') && (nmot_w <= uVar7)) {
      DAT_005b9b00 = 0x2000;
    }
    else {
      DAT_003fc0f7 = '\x01';
      DAT_005b9b00 = DAT_005b9b02;
      if ((iVar4 < 0x2001) && (DAT_005b9b00 = (short)iVar3, iVar4 < iVar3)) {
        DAT_005b9b00 = DAT_005b9b02;
      }
    }
  }
  fnstab_w = calc_value_from_y(&DAT_001c87e8,DAT_005b9b00);
  return;
}

