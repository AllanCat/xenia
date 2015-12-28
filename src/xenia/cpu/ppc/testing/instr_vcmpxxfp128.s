test_vcmpxxfp128_1:
  #_ REGISTER_IN v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_IN v5 [3f800000, 3f800000, 3f800000, 3f800000]
  vcmpeqfp128. v3, v4, v5
  mfocrf  r3, 2  # cr6
  blr
  #_ REGISTER_OUT v3 [ffffffff, ffffffff, ffffffff, ffffffff]
  #_ REGISTER_OUT v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT v5 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT r3 0x00000080

test_vcmpxxfp128_2:
  #_ REGISTER_IN v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_IN v5 [3f800001, 3f800000, 3f800000, 3f800000]
  vcmpeqfp128. v3, v4, v5
  mfocrf  r3, 2  # cr6
  blr
  #_ REGISTER_OUT v3 [00000000, ffffffff, ffffffff, ffffffff]
  #_ REGISTER_OUT v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT v5 [3f800001, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT r3 0x00000000

test_vcmpxxfp128_3:
  #_ REGISTER_IN v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_IN v5 [3f800001, 3f800001, 3f800001, 3f800001]
  vcmpeqfp128. v3, v4, v5
  mfocrf  r3, 2  # cr6
  blr
  #_ REGISTER_OUT v3 [00000000, 00000000, 00000000, 00000000]
  #_ REGISTER_OUT v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT v5 [3f800001, 3f800001, 3f800001, 3f800001]
  #_ REGISTER_OUT r3 0x00000020

test_vcmpxxfp128_4:
  #_ REGISTER_IN v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_IN v5 [3f800001, 3f800001, 3f800001, 3f800001]
  vcmpgefp128. v3, v4, v5
  mfocrf  r3, 2  # cr6
  blr
  #_ REGISTER_OUT v3 [00000000, 00000000, 00000000, 00000000]
  #_ REGISTER_OUT v4 [3f800000, 3f800000, 3f800000, 3f800000]
  #_ REGISTER_OUT v5 [3f800001, 3f800001, 3f800001, 3f800001]
  #_ REGISTER_OUT r3 0x00000020
