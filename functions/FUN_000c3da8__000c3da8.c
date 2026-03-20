/*
 * Program: n42.bin
 * Function: FUN_000c3da8
 * Entry: 000c3da8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c3da8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)ignFadeStatBits;
  uVar1 = 1 << (param_1 & 0x3f);
  ignFadeStatBits = ignFadeStatBits | (byte)uVar1;
  if ((uVar2 | uVar1 & 0xff) != 0) {
    kt_zuen_fdReq_u16 = 0x9a9a;
  }
  (&kt_zuen_fdPatArray_u8)[param_1 & 0xff] = 0xff;
  FUN_000c3c74();
  return;
}

