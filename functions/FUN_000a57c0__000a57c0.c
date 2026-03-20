/*
 * Program: n42.bin
 * Function: FUN_000a57c0
 * Entry: 000a57c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000a57c0(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined auStack_28 [4];
  ushort local_24;
  ushort local_22;
  undefined2 local_20;
  ushort local_1e;
  ushort local_1c;
  
  uVar8 = (uint)(byte)(&DAT_00016fcd)[param_1 * 5];
  uVar6 = DAT_005bae48;
  uVar7 = DAT_005bae50;
  uVar1 = DAT_00016f51;
  if ((&DAT_00016fcc)[param_1 * 5] == '\x01') {
    uVar6 = DAT_005bae20;
    uVar7 = DAT_005bae28;
    uVar1 = DAT_00016f50;
  }
  uVar5 = ~(1 << (uVar8 & 0x3f));
  if (uVar8 < 8) {
    uVar2 = (ushort)~uVar7;
    local_1c = uVar2 & 0xff | 0x2500;
    local_1e = (ushort)uVar6 & 0xff | 0x3100;
    uVar3 = (ushort)uVar5;
    local_22 = uVar2 & uVar3 & 0xff | 0x2500;
    local_24 = (ushort)uVar6 & uVar3 & 0xff | 0x3100;
  }
  else if (uVar8 - 8 < 8) {
    uVar2 = (ushort)(~uVar7 >> 8);
    local_1c = uVar2 & 0xff | 0x2900;
    uVar3 = (ushort)((uint)uVar6 >> 8);
    local_1e = uVar3 & 0xff | 0x3600;
    uVar4 = (ushort)(uVar5 >> 8);
    local_22 = uVar2 & uVar4 & 0xff | 0x2900;
    local_24 = uVar3 & uVar4 & 0xff | 0x3600;
  }
  else {
    local_1c = 0x2500;
    local_1e = 0x3a00;
    local_22 = 0x2500;
    local_24 = 0x3a00;
  }
  local_20 = 0xdd00;
  (*(code *)&SUB_00013af0)(uVar1,1,5,&local_24,auStack_28);
  (*(code *)&SUB_00013858)(uVar1,auStack_28);
  return;
}

