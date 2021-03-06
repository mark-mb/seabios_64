#ifndef __NVDIMM_H
#define __NVDIMM_H

struct nvdimm_addr {
    u64 addr;
    u64 length;
};

void nvdimm_setup(void);
void nvdimm_boot(struct nvdimm_addr *NvdimmAddr);

#endif
