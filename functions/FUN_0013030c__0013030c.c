/*
 * Program: n42.bin
 * Function: FUN_0013030c
 * Entry: 0013030c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013030c(void)

{
  uint uVar1;
  undefined uVar2;
  byte bVar3;
  
  ksb = 0xff;
  ksa = 0xff;
  ksdefb = 0xff;
  ksdefa = 0xff;
  DAT_003fb18c = 0;
  if (B_pwf != '\0') {
    DAT_003fb170 = 0;
    do {
      (&UNK_003fd704)[DAT_003fb170] = 0;
      DAT_003fb170 = DAT_003fb170 + 1;
    } while (DAT_003fb170 < 0xa8);
  }
  FUN_00178ce4();
  uVar2 = DAT_005b9131;
  bVar3 = 0;
  do {
    uVar1 = (uint)bVar3;
    (&UNK_003fc268)[uVar1] = 0;
    (&DAT_005b9138)[uVar1] = uVar2;
    if (uVar1 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x001303d4 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + 0xf303e0))();
      return;
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 4);
  DAT_003fb170 = bVar3;
  return;
}

