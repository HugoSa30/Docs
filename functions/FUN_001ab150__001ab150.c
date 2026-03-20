/*
 * Program: n42.bin
 * Function: FUN_001ab150
 * Entry: 001ab150
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001ab150(void)

{
  undefined uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  (*(code *)&SUB_00015a20)();
  uVar5 = 0;
  if (DAT_000175ec != 0) {
    do {
      iVar6 = uVar5 * 0x18;
      uVar7 = *(undefined4 *)(iVar6 + 0x174f8);
      uVar1 = *(undefined *)(iVar6 + 0x17506);
      uVar2 = *(undefined2 *)(iVar6 + 0x17502);
      uVar3 = *(ushort *)(iVar6 + 0x17504);
      iVar8 = *(int *)(iVar6 + 0x174fc);
      iVar4 = (uint)*(byte *)(iVar6 + 0x17501) * 0x10;
      (**(code **)(iVar4 + 0x175bc))
                (*(undefined4 *)(iVar4 + 0x175b8),uVar7,*(undefined *)(iVar6 + 0x17500));
      (**(code **)(iVar4 + 0x175c0))
                (*(undefined4 *)(iVar4 + 0x175b8),uVar7,iVar8 * (uint)uVar3 & 0xffff,uVar2,uVar1,
                 0xff);
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < DAT_000175ec);
  }
  return;
}

