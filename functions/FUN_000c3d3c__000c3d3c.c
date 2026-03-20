/*
 * Program: n42.bin
 * Function: FUN_000c3d3c
 * Entry: 000c3d3c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3d3c(uint param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = (uint)ignFadeStatBits & ~(1 << (param_1 & 0x3f));
  ignFadeStatBits = (byte)uVar1;
  if (uVar1 == 0) {
    kt_zuen_fdReq_u16 = 0x6565;
  }
  (&kt_zuen_fdPatArray_u8)[param_1] = (&kt_zuen_fdPatArray_u8)[param_1] & ~param_2;
  FUN_000c3c74();
  return;
}

