/*
 * Program: n42.bin
 * Function: FUN_000b0310
 * Entry: 000b0310
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_000b0310(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 in_MSR;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_XER;
  undefined4 uVar10;
  undefined4 in_CTR;
  undefined4 in_SRR0;
  undefined4 in_SRR1;
  
  puVar2 = (undefined *)0x7f7f7f7f;
  uVar1 = 0;
  uVar8 = 0x400000;
  puVar3 = puVar2;
  puVar4 = puVar2;
  puVar5 = puVar2;
  puVar6 = puVar2;
  puVar7 = puVar2;
  puVar9 = puVar2;
  FUN_0009915c(0x7f7f7f7f,0x7f7f7f7f);
  uVar10 = 0xb03b0;
  _DAT_003ff0d0 = FUN_000b0310();
  _DAT_003ff0b0 = &UNK_003ff0f8;
  _DAT_003ff0c4 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  _DAT_003fcad0 = in_SRR0;
  _DAT_003ff0b8 = uVar1;
  _DAT_003ff0bc = in_CTR;
  _DAT_003ff0c0 = in_XER;
  _DAT_003ff0c8 = uVar10;
  _DAT_003ff0d8 = puVar2;
  _DAT_003ff0dc = puVar3;
  _DAT_003ff0e0 = puVar4;
  _DAT_003ff0e4 = puVar5;
  _DAT_003ff0e8 = puVar6;
  _DAT_003ff0ec = puVar7;
  _DAT_003ff0f0 = uVar8;
  _DAT_003ff0f4 = puVar9;
  (*(code *)&SUB_00faca3c)(0x20);
  returnFromInterrupt(in_MSR,in_SRR1);
  return _DAT_003ff0d0;
}

