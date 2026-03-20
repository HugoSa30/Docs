/*
 * Program: n42.bin
 * Function: FUN_000d2868
 * Entry: 000d2868
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d29ec) */

void FUN_000d2868(void)

{
  uint uVar1;
  
  if (B_llrein == '\0') {
    if ((nsst == 0) || (uVar1 = ((uint)nmotll << 7) / (uint)nsst, 0xffff < uVar1)) {
      uVar1 = 0xffff;
    }
    if (uVar1 < 0x100) {
      qnst_w = (word)(uVar1 << 8);
    }
    else {
      qnst_w = 0xffff;
    }
    if (B_gdst == 0) {
      mrstt_w = FUN_000aa834(KFMDST,&DAT_001c8aa8,DAT_001c8aa7,&DAT_001c8ab0,&DAT_001c8ac0,tmot,
                             qnst_w);
    }
    else {
      mrstt_w = FUN_000aa834(KFMDSTGD,&DAT_001c8b42,DAT_001c8b41,0x1c8b4a,0x1c8b5a,tmot,qnst_w);
    }
    if (mrfamx_w < mrstt_w) {
      mrstt_w = mrfamx_w;
    }
    uVar1 = (uint)mimxl1_w - (uint)mimin_w;
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    else if (0xffff < (int)uVar1) {
      uVar1 = 0xffff;
    }
    uVar1 = FUN_000b1800(mrstt_w,uVar1 & 0xffff);
    uVar1 = (uVar1 & 0xffff) + (uint)mimin_w;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    mistt = (byte)(uVar1 >> 8);
  }
  else {
    mistt = 0;
    mrstt_w = 0;
  }
  return;
}

