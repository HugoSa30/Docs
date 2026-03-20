/*
 * Program: n42.bin
 * Function: FUN_001281ec
 * Entry: 001281ec
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001281ec(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  
  uVar3 = 0;
  uVar4 = 0;
  do {
    sVar5 = 0;
    uVar6 = 0x80;
    uVar1 = *(ushort *)(&UNK_003fb7fa + uVar4 * 2);
    uVar2 = (ushort)~uVar1 >> 1;
    *(ushort *)(&UNK_003fb7fa + uVar4 * 2) = uVar2;
    uVar7 = 0;
    do {
      sVar5 = sVar5 + (ushort)((uVar2 & uVar6) != 0);
      uVar6 = uVar6 >> 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    if ((sVar5 + (~uVar1 & 1) & 1) != 0) {
      uVar3 = 1;
    }
    uVar4 = uVar4 + 1 & 0xffff;
  } while (uVar4 < 6);
  return uVar3;
}

