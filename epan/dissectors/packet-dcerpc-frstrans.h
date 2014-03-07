/* autogenerated by pidl */

/* DO NOT EDIT
	This filter was automatically generated
	from frstrans.idl and frstrans.cnf.

	Pidl is a perl based IDL compiler for DCE/RPC idl files. 
	It is maintained by the Samba team, not the Wireshark team.
	Instructions on how to download and install Pidl can be 
	found at http://wiki.wireshark.org/Pidl
*/


#ifndef __PACKET_DCERPC_FRSTRANS_H
#define __PACKET_DCERPC_FRSTRANS_H

#define FRSTRANS_PROTOCOL_VERSION_W2K3R2 (0x00050000)
#define FRSTRANS_PROTOCOL_VERSION_LONGHORN_SERVER (0x00050002)
extern const value_string frstrans_frstrans_ProtocolVersion_vals[];
int frstrans_dissect_enum_ProtocolVersion(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int frstrans_dissect_bitmap_TransportFlags(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define FRSTRANS_UPDATE_REQUEST_ALL (0x0000)
#define FRSTRANS_UPDATE_REQUEST_TOMBSTONES (0x0001)
#define FRSTRANS_UPDATE_REQUEST_LIVE (0x0002)
extern const value_string frstrans_frstrans_UpdateRequestType_vals[];
int frstrans_dissect_enum_UpdateRequestType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define FRSTRANS_UPDATE_STATUS_DONE (0x0002)
#define FRSTRANS_UPDATE_STATUS_MORE (0x0003)
extern const value_string frstrans_frstrans_UpdateStatus_vals[];
int frstrans_dissect_enum_UpdateStatus(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int frstrans_dissect_struct_VersionVector(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_Update(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define FRSTRANS_VERSION_REQUEST_NORNAL_SYNC (0x0000)
#define FRSTRANS_VERSION_REQUEST_SLOW_SYNC (0x0001)
#define FRSTRANS_VERSION_REQUEST_SLAVE_SYNC (0x0002)
extern const value_string frstrans_frstrans_VersionRequestType_vals[];
int frstrans_dissect_enum_VersionRequestType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define FRSTRANS_VERSION_CHANGE_NOTIFY (0x0000)
#define FRSTRANS_VERSION_CHANGE_ALL (0x0002)
extern const value_string frstrans_frstrans_VersionChangeType_vals[];
int frstrans_dissect_enum_VersionChangeType(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int frstrans_dissect_struct_EpoqueVector(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_AsyncVersionVectorResponse(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_AsyncResponseContext(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define FRSTRANS_STAGING_POLICY_SERVER_DEFAULTY (0x0000)
#define FRSTRANS_STAGING_POLICY_STATGING_REQUIRED (0x0001)
#define FRSTRANS_STAGING_POLICY_RESTATGING_REQUIRED (0x0002)
extern const value_string frstrans_frstrans_RequestedStagingPolicy_vals[];
int frstrans_dissect_enum_RequestedStagingPolicy(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define FRSTRANS_RDC_FILTER_GENERIC (0x0000)
#define FRSTRANS_RDC_FILTER_MAX (0x0001)
#define FRSTRANS_RDC_FILTER_POINT (0x0002)
#define FRSTRANS_RDC_MAX_ALGORITHM (0x0003)
extern const value_string frstrans_frstrans_RdcChunckerAlgorithm_vals[];
int frstrans_dissect_enum_RdcChunckerAlgorithm(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int frstrans_dissect_struct_RdcParameterGeneric(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_RdcParameterFilterMax(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_RdcParameterFilterPoint(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
int frstrans_dissect_struct_RdcParameters(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#define FRSTRANS_RDC_VERSION (0x0001)
extern const value_string frstrans_frstrans_RdcVersion_vals[];
int frstrans_dissect_enum_RdcVersion(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define FRSTRANS_RDC_VERSION_COMPATIBLE (0x0001)
extern const value_string frstrans_frstrans_RdcVersionCompatible_vals[];
int frstrans_dissect_enum_RdcVersionCompatible(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
#define FRSTRANS_RDC_UNCOMPRESSED (0x0000)
#define FRSTRANS_RDC_XPRESS (0x0001)
extern const value_string frstrans_frstrans_RdcCompressionAlgorithm_vals[];
int frstrans_dissect_enum_RdcCompressionAlgorithm(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 *param _U_);
int frstrans_dissect_struct_RdcFileInfo(tvbuff_t *tvb _U_, int offset _U_, packet_info *pinfo _U_, proto_tree *parent_tree _U_, dcerpc_info* di _U_, guint8 *drep _U_, int hf_index _U_, guint32 param _U_);
#endif /* __PACKET_DCERPC_FRSTRANS_H */
