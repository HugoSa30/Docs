/*
 * Program: n42.bin
 * Function: FUN_001aee04
 * Entry: 001aee04
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001aee04(void)

{
  byte bVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined2 extraout_r4;
  undefined2 extraout_r4_00;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  
  if (_DAT_003fc35c < 2) {
    (*(code *)&SUB_00faed08)(0x34,0);
    uVar4 = 0;
  }
  else {
    (*(code *)&SUB_00faf214)(*_DAT_003fc354,*(undefined *)(_DAT_003fc354 + 2),0);
    (*(code *)&SUB_00faf170)(*_DAT_003fc354,*(undefined *)(_DAT_003fc354 + 2),0);
    bVar1 = *(byte *)(_DAT_003fc354 + 2);
    iVar7 = *_DAT_003fc354;
    *(ushort *)(iVar7 + 0x20) = ~(ushort)(1 << (bVar1 & 0x3f));
    uVar6 = (uint)bVar1 * 2;
    *(uint *)(iVar7 + 0x14) = *(uint *)(iVar7 + 0x14) & ~(3 << (uVar6 & 0x3f)) | 0 << (uVar6 & 0x3f)
    ;
    uVar5 = 0;
    do {
      (*(code *)&SUB_0006561c)(*_DAT_003fc354,*(undefined *)(_DAT_003fc354 + 2),uVar5 & 0xff,0);
      puVar2 = _DAT_003fc350;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 5);
    uVar6 = (uint)_DAT_003fc358;
    func_0xff21fd5c(0,(uint)*_DAT_003fc350 * 10000,0,uVar6 << 2);
    piVar3 = _DAT_003fc354;
    iVar7 = _DAT_003fc354[1];
    *(undefined2 *)(iVar7 + 6) = extraout_r4;
    func_0xff21fd5c(0,(uint)puVar2[1] * 10000,0,uVar6);
    *(undefined2 *)(iVar7 + 10) = extraout_r4_00;
    (*(code *)&SUB_00faf2d0)(*piVar3,*(undefined *)(piVar3 + 2),6);
    uVar6 = (uint)*(byte *)(_DAT_003fc354 + 2);
    iVar7 = *_DAT_003fc354;
    *(int *)(iVar7 + 0x18) = 3 << (uVar6 * 2 & 0x3f);
    *(ushort *)(iVar7 + 0x20) = ~(ushort)(1 << (uVar6 & 0x3f));
    (*(code *)&SUB_00faf170)(iVar7,uVar6,1);
    _DAT_003fc35c = 4;
    (*(code *)&SUB_00faf214)(*_DAT_003fc354,*(undefined *)(_DAT_003fc354 + 2),1);
    uVar4 = 1;
  }
  return uVar4;
}

