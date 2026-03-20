/*
 * Program: n42.bin
 * Function: FUN_0017b5bc
 * Entry: 0017b5bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0017b5bc(void)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (((dffgen < DAT_001cb235) || (B_ll == '\0')) && (DAT_005b8ac2 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  DAT_003fb4c3 = func_0xff221e78(&UNK_003fb4c2,uVar2,DAT_001cb237);
  if (B_genfprl == 0) {
    if (DAT_003fb4c3 == '\0') {
      DAT_005b8ac7 = '\0';
    }
    else {
      DAT_005b8ac7 = '\x01';
    }
  }
  else {
    DAT_005b8ac7 = DAT_001cb236;
  }
  DAT_005b8ac8 = ufgen;
  uVar3 = (uint)DAT_003fddc4;
  if (uVar3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017b6b4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar3 * 4 + 0xf7b6c0))();
    return;
  }
  DAT_005b8ac0 = (undefined2)((uint)nsllm * (uint)DAT_001cadae * 5 >> 4);
  if (uVar3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017b750 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar3 * 4 + 0xf7b75c))();
    return;
  }
  DAT_005b8ac4 = func_0xff21a054(DAT_001c9fc0,&DAT_001c9fc2,DAT_001c9fc1,0x1c9fca,&DAT_001c9fdc);
  if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017b898 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_003fddc4 * 4 + 0xf7b8a4))();
    return;
  }
  DAT_005b8ac5 = func_0xff21a054(DAT_001ca2a0,&DAT_001ca2a2,DAT_001ca2a1,&DAT_001ca2a8,&DAT_001ca2b6
                                 ,DAT_005b8ac4,DAT_005b8a7e);
  uVar3 = (uint)DAT_005b8ab2 + (uint)DAT_001cb233;
  if (0xfe < uVar3) {
    uVar3 = 0xfe;
  }
  DAT_005b8ac6 = (undefined)uVar3;
  if (DAT_003fddc4 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x0017ba70 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)DAT_003fddc4 * 4 + 0xf7ba7c))();
    return;
  }
  DAT_005b8ac3 = func_0xff2196d0(&DAT_001caf94,DAT_005b8ac5,uVar3 & 0xff);
  bVar1 = DAT_005b8ac3;
  if (DAT_001cb232 == '\x01') {
    bVar1 = dffgen;
  }
  DAT_003fb4c1 = func_0xff221e78(&UNK_003fb4c0,bVar1 < DAT_001cb234,DAT_001cb238);
  if ((DAT_003fb4c1 == '\0') && (DAT_005b8ac7 != '\0')) {
    DAT_005b8ac2 = 1;
  }
  else {
    DAT_005b8ac2 = 0;
  }
  return;
}

