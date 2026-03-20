/*
 * Program: n42.bin
 * Function: FUN_000c3e20
 * Entry: 000c3e20
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3e20(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)ignFadeStatBits & ~(1 << (param_1 & 0x3f));
  ignFadeStatBits = (byte)uVar1;
  if (uVar1 == 0) {
    kt_zuen_fdReq_u16 = 0x6565;
  }
  (&kt_zuen_fdPatArray_u8)[param_1 & 0xff] = 0;
  FUN_000c3c74();
  return;
}

