/*
 * Program: n42.bin
 * Function: FUN_0009ceb8
 * Entry: 0009ceb8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009ceb8(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  
  param_1 = param_1 * 0x10;
  uVar8 = *(uint *)(&DAT_003fa13c + param_1);
  uVar5 = 0;
  puVar3 = &UNK_003fa130;
  uVar4 = *(undefined4 *)(&DAT_003fa144 + param_1);
  uVar2 = uVar8;
  uVar6 = 0;
  do {
    uVar1 = FUN_0009ce30((uint)uVar6,uVar2,uVar4);
    *(uint *)(puVar3 + (uint)uVar6 * 4) = uVar1;
    if (uVar8 < uVar1) {
      uVar8 = uVar1;
      uVar5 = uVar6;
    }
    uVar7 = uVar6 + 1;
    uVar2 = FUN_0009cdd4(uVar6,uVar2);
    uVar6 = uVar7;
  } while (uVar7 == 0);
  _DAT_003fa170 = uVar2;
  if (*(uint *)(&DAT_003fa140 + param_1) < uVar2) {
    (*(code *)&SUB_00faca3c)(0x15e);
  }
  if (*(short *)(uVar8 + 4) == (ushort)(uVar5 + ~(*(ushort *)(uVar8 + 2) + *(short *)(uVar8 + 6))))
  {
    uVar2 = (uint)(*(ushort *)(uVar8 + 2) >> 8) << 5;
  }
  else {
    uVar2 = (uint)*(ushort *)((uint)uVar5 * 4 + 0xec00);
  }
  _DAT_003fa174 = uVar8 + (uVar2 & 0xfffffffe) + 8;
  if (_DAT_003fa174 <= *(uint *)(&DAT_003fa140 + param_1)) {
    _DAT_003fa174 = *(uint *)(&DAT_003fa140 + param_1);
  }
  if (*(uint *)(&DAT_003fa144 + param_1) <= _DAT_003fa174) {
    _DAT_003fa174 = 0;
  }
  return;
}

