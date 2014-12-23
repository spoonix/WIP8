#ifndef GLEXTENSIONS_H
#define GLEXTENSIONS_H

class GLExtensions
{
    public:
        GLExtensions();

        bool extGL_ARB_multitexture;
        bool extGLX_ARB_get_proc_address;
        bool extGL_ARB_transpose_matrix;
        bool extWGL_ARB_buffer_region;
        bool extGL_ARB_multisample;
        bool extGLX_ARB_multisample;
        bool extWGL_ARB_multisample;
        bool extGL_ARB_texture_env_add;
        bool extGL_ARB_texture_cube_map;
        bool extWGL_ARB_extensions_string;
        bool extWGL_ARB_pixel_format;
        bool extWGL_ARB_make_current_read;
        bool extWGL_ARB_pbuffer;
        bool extGL_ARB_texture_compression;
        bool extGL_ARB_texture_border_clamp;
        bool extGL_ARB_point_parameters;
        bool extGL_ARB_vertex_blend;
        bool extGL_ARB_matrix_palette;
        bool extGL_ARB_texture_env_combine;
        bool extGL_ARB_texture_env_crossbar;
        bool extGL_ARB_texture_env_dot3;
        bool extWGL_ARB_render_texture;
        bool extGL_ARB_texture_mirrored_repeat;
        bool extGL_ARB_depth_texture;
        bool extGL_ARB_shadow;
        bool extGL_ARB_shadow_ambient;
        bool extGL_ARB_window_pos;
        bool extGL_ARB_vertex_program;
        bool extGL_ARB_fragment_program;
        bool extGL_ARB_vertex_buffer_object;
        bool extGLX_ARB_vertex_buffer_object;
        bool extGL_ARB_occlusion_query;
        bool extGL_ARB_shader_objects;
        bool extGL_ARB_vertex_shader;
        bool extGL_ARB_fragment_shader;
        bool extGL_ARB_shading_language_100;
        bool extGL_ARB_texture_non_power_of_two;
        bool extGL_ARB_point_sprite;
        bool extGL_ARB_fragment_program_shadow;
        bool extGL_ARB_draw_buffers;
        bool extGL_ARB_texture_rectangle;
        bool extGL_ARB_color_buffer_float;
        bool extWGL_ARB_pixel_format_float;
        bool extGLX_ARB_fbconfig_float;
        bool extGL_ARB_half_float_pixel;
        bool extGL_ARB_texture_float;
        bool extGL_ARB_pixel_buffer_object;
        bool extGL_ARB_depth_buffer_float;
        bool extGL_ARB_draw_instanced;
        bool extGL_ARB_framebuffer_object;
        bool extGL_ARB_framebuffer_sRGB;
        bool extGLX_ARB_framebuffer_sRGB;
        bool extWGL_ARB_framebuffer_sRGB;
        bool extGL_ARB_geometry_shader4;
        bool extGL_ARB_half_float_vertex;
        bool extGL_ARB_instanced_arrays;
        bool extGL_ARB_map_buffer_range;
        bool extGL_ARB_texture_buffer_object;
        bool extGL_ARB_texture_compression_rgtc;
        bool extGL_ARB_texture_rg;
        bool extGL_ARB_vertex_array_object;
        bool extWGL_ARB_create_context;
        bool extGLX_ARB_create_context;
        bool extGL_ARB_uniform_buffer_object;
        bool extGL_ARB_compatibility;
        bool extGL_ARB_copy_buffer;
        bool extGL_ARB_shader_texture_lod;
        bool extGL_ARB_depth_clamp;
        bool extGL_ARB_draw_elements_base_vertex;
        bool extGL_ARB_fragment_coord_conventions;
        bool extGL_ARB_provoking_vertex;
        bool extGL_ARB_seamless_cube_map;
        bool extGL_ARB_sync;
        bool extGL_ARB_texture_multisample;
        bool extGL_ARB_vertex_array_bgra;
        bool extGL_ARB_draw_buffers_blend;
        bool extGL_ARB_sample_shading;
        bool extGL_ARB_texture_cube_map_array;
        bool extGL_ARB_texture_gather;
        bool extGL_ARB_texture_query_lod;
        bool extWGL_ARB_create_context_profile;
        bool extGLX_ARB_create_context_profile;
        bool extGL_ARB_shading_language_include;
        bool extGL_ARB_texture_compression_bptc;
        bool extGL_ARB_blend_func_extended;
        bool extGL_ARB_explicit_attrib_location;
        bool extGL_ARB_occlusion_query2;
        bool extGL_ARB_sampler_objects;
        bool extGL_ARB_shader_bit_encoding;
        bool extGL_ARB_texture_rgb10_a2ui;
        bool extGL_ARB_texture_swizzle;
        bool extGL_ARB_timer_query;
        bool extGL_ARB_vertex_type_2_10_10_10_rev;
        bool extGL_ARB_draw_indirect;
        bool extGL_ARB_gpu_shader5;
        bool extGL_ARB_gpu_shader_fp64;
        bool extGL_ARB_shader_subroutine;
        bool extGL_ARB_tessellation_shader;
        bool extGL_ARB_texture_buffer_object_rgb32;
        bool extGL_ARB_transform_feedback2;
        bool extGL_ARB_transform_feedback3;
        bool extGL_ARB_ES2_compatibility;
        bool extGL_ARB_get_program_binary;
        bool extGL_ARB_separate_shader_objects;
        bool extGL_ARB_shader_precision;
        bool extGL_ARB_vertex_attrib_64bit;
        bool extGL_ARB_viewport_array;
        bool extGLX_ARB_create_context_robustness;
        bool extWGL_ARB_create_context_robustness;
        bool extGL_ARB_cl_event;
        bool extGL_ARB_debug_output;
        bool extGL_ARB_robustness;
        bool extGL_ARB_shader_stencil_export;
        bool extGL_ARB_base_instance;
        bool extGL_ARB_shading_language_420pack;
        bool extGL_ARB_transform_feedback_instanced;
        bool extGL_ARB_compressed_texture_pixel_storage;
        bool extGL_ARB_conservative_depth;
        bool extGL_ARB_internalformat_query;
        bool extGL_ARB_map_buffer_alignment;
        bool extGL_ARB_shader_atomic_counters;
        bool extGL_ARB_shader_image_load_store;
        bool extGL_ARB_shading_language_packing;
        bool extGL_ARB_texture_storage;
        bool extGL_KHR_texture_compression_astc_hdr;
        bool extGL_KHR_texture_compression_astc_ldr;
        bool extGL_KHR_debug;
        bool extGL_ARB_arrays_of_arrays;
        bool extGL_ARB_clear_buffer_object;
        bool extGL_ARB_compute_shader;
        bool extGL_ARB_copy_image;
        bool extGL_ARB_texture_view;
        bool extGL_ARB_vertex_attrib_binding;
        bool extGL_ARB_robustness_isolation;
        bool extGL_ARB_ES3_compatibility;
        bool extGL_ARB_explicit_uniform_location;
        bool extGL_ARB_fragment_layer_viewport;
        bool extGL_ARB_framebuffer_no_attachments;
        bool extGL_ARB_internalformat_query2;
        bool extGL_ARB_invalidate_subdata;
        bool extGL_ARB_multi_draw_indirect;
        bool extGL_ARB_program_interface_query;
        bool extGL_ARB_robust_buffer_access_behavior;
        bool extGL_ARB_shader_image_size;
        bool extGL_ARB_shader_storage_buffer_object;
        bool extGL_ARB_stencil_texturing;
        bool extGL_ARB_texture_buffer_range;
        bool extGL_ARB_texture_query_levels;
        bool extGL_ARB_texture_storage_multisample;
        bool extGLX_ARB_robustness_application_isolation;
        bool extGLX_ARB_robustness_share_group_isolation;
        bool extWGL_ARB_robustness_application_isolation;
        bool extWGL_ARB_robustness_share_group_isolation;
        bool extGL_ARB_buffer_storage;
        bool extGL_ARB_clear_texture;
        bool extGL_ARB_enhanced_layouts;
        bool extGL_ARB_multi_bind;
        bool extGL_ARB_query_buffer_object;
        bool extGL_ARB_texture_mirror_clamp_to_edge;
        bool extGL_ARB_texture_stencil8;
        bool extGL_ARB_vertex_type_10f_11f_11f_rev;
        bool extGL_ARB_bindless_texture;
        bool extGL_ARB_compute_variable_group_size;
        bool extGL_ARB_indirect_parameters;
        bool extGL_ARB_seamless_cubemap_per_texture;
        bool extGL_ARB_shader_draw_parameters;
        bool extGL_ARB_shader_group_vote;
        bool extGL_ARB_sparse_texture;
        bool extGL_ARB_ES3_1_compatibility;
        bool extGL_ARB_clip_control;
        bool extGL_ARB_conditional_render_inverted;
        bool extGL_ARB_cull_distance;
        bool extGL_ARB_derivative_control;
        bool extGL_ARB_direct_state_access;
        bool extGL_ARB_get_texture_sub_image;
        bool extGL_ARB_shader_texture_image_samples;
        bool extGL_ARB_texture_barrier;
        bool extGL_KHR_context_flush_control;
        bool extGLX_ARB_context_flush_control;
        bool extWGL_ARB_context_flush_control;
        bool extGL_KHR_robust_buffer_access_behavior;
        bool extGL_KHR_robustness;
        bool extGL_ARB_pipeline_statistics_query;
        bool extGL_ARB_sparse_buffer;
        bool extGL_ARB_transform_feedback_overflow_query;
        bool extGL_EXT_abgr;
        bool extGL_EXT_blend_color;
        bool extGL_EXT_polygon_offset;
        bool extGL_EXT_texture;
        bool extGL_EXT_texture3D;
        bool extGL_SGIS_texture_filter4;
        bool extGL_EXT_subtexture;
        bool extGL_EXT_copy_texture;
        bool extGL_EXT_histogram;
        bool extGL_EXT_convolution;
        bool extGL_SGI_color_matrix;
        bool extGL_SGI_color_table;
        bool extGL_SGIS_pixel_texture;
        bool extGL_SGIX_pixel_texture;
        bool extGL_SGIS_texture4D;
        bool extGL_SGI_texture_color_table;
        bool extGL_EXT_cmyka;
        bool extGL_EXT_texture_object;
        bool extGL_SGIS_detail_texture;
        bool extGL_SGIS_sharpen_texture;
        bool extGL_EXT_packed_pixels;
        bool extGL_SGIS_texture_lod;
        bool extGL_SGIS_multisample;
        bool extGLX_SGIS_multisample;
        bool extGL_EXT_rescale_normal;
        bool extGLX_EXT_visual_info;
        bool extGL_EXT_vertex_array;
        bool extGL_EXT_misc_attribute;
        bool extGL_SGIS_generate_mipmap;
        bool extGL_SGIX_clipmap;
        bool extGL_SGIX_shadow;
        bool extGL_SGIS_texture_edge_clamp;
        bool extGL_SGIS_texture_border_clamp;
        bool extGL_EXT_blend_minmax;
        bool extGL_EXT_blend_subtract;
        bool extGL_EXT_blend_logic_op;
        bool extGLX_SGI_swap_control;
        bool extGLX_SGI_video_sync;
        bool extGLX_SGI_make_current_read;
        bool extGLX_SGIX_video_source;
        bool extGLX_EXT_visual_rating;
        bool extGL_SGIX_interlace;
        bool extGLX_EXT_import_context;
        bool extGLX_SGIX_fbconfig;
        bool extGLX_SGIX_pbuffer;
        bool extGL_SGIS_texture_select;
        bool extGL_SGIX_sprite;
        bool extGL_SGIX_texture_multi_buffer;
        bool extGL_EXT_point_parameters;
        bool extGL_SGIX_instruments;
        bool extGL_SGIX_texture_scale_bias;
        bool extGL_SGIX_framezoom;
        bool extGL_SGIX_tag_sample_buffer;
        bool extGL_SGIX_reference_plane;
        bool extGL_SGIX_flush_raster;
        bool extGLX_SGI_cushion;
        bool extGL_SGIX_depth_texture;
        bool extGL_SGIS_fog_function;
        bool extGL_SGIX_fog_offset;
        bool extGL_HP_image_transform;
        bool extGL_HP_convolution_border_modes;
        bool extGL_SGIX_texture_add_env;
        bool extGL_EXT_color_subtable;
        bool extGLU_EXT_object_space_tess;
        bool extGL_PGI_vertex_hints;
        bool extGL_PGI_misc_hints;
        bool extGL_EXT_paletted_texture;
        bool extGL_EXT_clip_volume_hint;
        bool extGL_SGIX_list_priority;
        bool extGL_SGIX_ir_instrument1;
        bool extGLX_SGIX_video_resize;
        bool extGL_SGIX_texture_lod_bias;
        bool extGLU_SGI_filter4_parameters;
        bool extGLX_SGIX_dm_buffer;
        bool extGL_SGIX_shadow_ambient;
        bool extGLX_SGIX_swap_group;
        bool extGLX_SGIX_swap_barrier;
        bool extGL_EXT_index_texture;
        bool extGL_EXT_index_material;
        bool extGL_EXT_index_func;
        bool extGL_EXT_index_array_formats;
        bool extGL_EXT_compiled_vertex_array;
        bool extGL_EXT_cull_vertex;
        bool extGLU_EXT_nurbs_tessellator;
        bool extGL_SGIX_ycrcb;
        bool extGL_EXT_fragment_lighting;
        bool extGL_IBM_rasterpos_clip;
        bool extGL_HP_texture_lighting;
        bool extGL_EXT_draw_range_elements;
        bool extGL_WIN_phong_shading;
        bool extGL_WIN_specular_fog;
        bool extGLX_SGIS_color_range;
        bool extGL_SGIS_color_range;
        bool extGL_EXT_light_texture;
        bool extGL_SGIX_blend_alpha_minmax;
        bool extGL_EXT_scene_marker;
        bool extGLX_EXT_scene_marker;
        bool extGL_SGIX_pixel_texture_bits;
        bool extGL_EXT_bgra;
        bool extGL_SGIX_async;
        bool extGL_SGIX_async_pixel;
        bool extGL_SGIX_async_histogram;
        bool extGL_INTEL_texture_scissor;
        bool extGL_INTEL_parallel_arrays;
        bool extGL_HP_occlusion_test;
        bool extGL_EXT_pixel_transform;
        bool extGL_EXT_pixel_transform_color_table;
        bool extGL_EXT_shared_texture_palette;
        bool extGLX_SGIS_blended_overlay;
        bool extGL_EXT_separate_specular_color;
        bool extGL_EXT_secondary_color;
        bool extGL_EXT_texture_env;
        bool extGL_EXT_texture_perturb_normal;
        bool extGL_EXT_multi_draw_arrays;
        bool extGL_SUN_multi_draw_arrays;
        bool extGL_EXT_fog_coord;
        bool extGL_REND_screen_coordinates;
        bool extGL_EXT_coordinate_frame;
        bool extGL_EXT_texture_env_combine;
        bool extGL_APPLE_specular_vector;
        bool extGL_APPLE_transform_hint;
        bool extGL_SUNX_constant_data;
        bool extGL_SUN_global_alpha;
        bool extGL_SUN_triangle_list;
        bool extGL_SUN_vertex;
        bool extWGL_EXT_display_color_table;
        bool extWGL_EXT_extensions_string;
        bool extWGL_EXT_make_current_read;
        bool extWGL_EXT_pixel_format;
        bool extWGL_EXT_pbuffer;
        bool extWGL_EXT_swap_control;
        bool extGL_EXT_blend_func_separate;
        bool extGL_INGR_color_clamp;
        bool extGL_INGR_interlace_read;
        bool extGL_EXT_stencil_wrap;
        bool extWGL_EXT_depth_float;
        bool extGL_EXT_422_pixels;
        bool extGL_NV_texgen_reflection;
        bool extGL_SGIX_texture_range;
        bool extGL_SUN_convolution_border_modes;
        bool extGLX_SUN_get_transparent_index;
        bool extGL_EXT_texture_env_add;
        bool extGL_EXT_texture_lod_bias;
        bool extGL_EXT_texture_filter_anisotropic;
        bool extGL_EXT_vertex_weighting;
        bool extGL_NV_light_max_exponent;
        bool extGL_NV_vertex_array_range;
        bool extGL_NV_register_combiners;
        bool extGL_NV_fog_distance;
        bool extGL_NV_texgen_emboss;
        bool extGL_NV_blend_square;
        bool extGL_NV_texture_env_combine4;
        bool extGL_MESA_resize_buffers;
        bool extGL_MESA_window_pos;
        bool extGL_EXT_texture_compression_s3tc;
        bool extGL_IBM_cull_vertex;
        bool extGL_IBM_multimode_draw_arrays;
        bool extGL_IBM_vertex_array_lists;
        bool extGL_3DFX_texture_compression_FXT1;
        bool extGL_3DFX_multisample;
        bool extGL_3DFX_tbuffer;
        bool extWGL_EXT_multisample;
        bool extGL_EXT_multisample;
        bool extGL_SGIX_vertex_preclip;
        bool extGL_SGIX_vertex_preclip_hint;
        bool extGL_SGIX_convolution_accuracy;
        bool extGL_SGIX_resample;
        bool extGL_SGIS_point_line_texgen;
        bool extGL_SGIS_texture_color_mask;
        bool extGLX_MESA_copy_sub_buffer;
        bool extGLX_MESA_pixmap_colormap;
        bool extGLX_MESA_release_buffers;
        bool extGLX_MESA_set_3dfx_mode;
        bool extGL_EXT_texture_env_dot3;
        bool extGL_ATI_texture_mirror_once;
        bool extGL_NV_fence;
        bool extGL_IBM_static_data;
        bool extGL_IBM_texture_mirrored_repeat;
        bool extGL_NV_evaluators;
        bool extGL_NV_packed_depth_stencil;
        bool extGL_NV_register_combiners2;
        bool extGL_NV_texture_compression_vtc;
        bool extGL_NV_texture_rectangle;
        bool extGL_NV_texture_shader;
        bool extGL_NV_texture_shader2;
        bool extGL_NV_vertex_array_range2;
        bool extGL_NV_vertex_program;
        bool extGLX_SGIX_visual_select_group;
        bool extGL_SGIX_texture_coordinate_clamp;
        bool extGLX_OML_swap_method;
        bool extGLX_OML_sync_control;
        bool extGL_OML_interlace;
        bool extGL_OML_subsample;
        bool extGL_OML_resample;
        bool extWGL_OML_sync_control;
        bool extGL_NV_copy_depth_to_color;
        bool extGL_ATI_envmap_bumpmap;
        bool extGL_ATI_fragment_shader;
        bool extGL_ATI_pn_triangles;
        bool extGL_ATI_vertex_array_object;
        bool extGL_EXT_vertex_shader;
        bool extGL_ATI_vertex_streams;
        bool extWGL_I3D_digital_video_control;
        bool extWGL_I3D_gamma;
        bool extWGL_I3D_genlock;
        bool extWGL_I3D_image_buffer;
        bool extWGL_I3D_swap_frame_lock;
        bool extWGL_I3D_swap_frame_usage;
        bool extGL_ATI_element_array;
        bool extGL_SUN_mesh_array;
        bool extGL_SUN_slice_accum;
        bool extGL_NV_multisample_filter_hint;
        bool extGL_NV_depth_clamp;
        bool extGL_NV_occlusion_query;
        bool extGL_NV_point_sprite;
        bool extWGL_NV_render_depth_texture;
        bool extWGL_NV_render_texture_rectangle;
        bool extGL_NV_texture_shader3;
        bool extGL_NV_vertex_program1_1;
        bool extGL_EXT_shadow_funcs;
        bool extGL_EXT_stencil_two_side;
        bool extGL_ATI_text_fragment_shader;
        bool extGL_APPLE_client_storage;
        bool extGL_APPLE_element_array;
        bool extGL_APPLE_fence;
        bool extGL_APPLE_vertex_array_object;
        bool extGL_APPLE_vertex_array_range;
        bool extGL_APPLE_ycbcr_422;
        bool extGL_S3_s3tc;
        bool extGL_ATI_draw_buffers;
        bool extWGL_ATI_pixel_format_float;
        bool extGL_ATI_texture_env_combine3;
        bool extGL_ATI_texture_float;
        bool extGL_NV_float_buffer;
        bool extWGL_NV_float_buffer;
        bool extGL_NV_fragment_program;
        bool extGL_NV_half_float;
        bool extGL_NV_pixel_data_range;
        bool extGL_NV_primitive_restart;
        bool extGL_NV_texture_expand_normal;
        bool extGL_NV_vertex_program2;
        bool extGL_ATI_map_object_buffer;
        bool extGL_ATI_separate_stencil;
        bool extGL_ATI_vertex_attrib_array_object;
        bool extGL_OES_byte_coordinates;
        bool extGL_OES_fixed_point;
        bool extGL_OES_single_precision;
        bool extGL_OES_compressed_paletted_texture;
        bool extGL_OES_read_format;
        bool extGL_OES_query_matrix;
        bool extGL_EXT_depth_bounds_test;
        bool extGL_EXT_texture_mirror_clamp;
        bool extGL_EXT_blend_equation_separate;
        bool extGL_MESA_pack_invert;
        bool extGL_MESA_ycbcr_texture;
        bool extGL_EXT_pixel_buffer_object;
        bool extGL_NV_fragment_program_option;
        bool extGL_NV_fragment_program2;
        bool extGL_NV_vertex_program2_option;
        bool extGL_NV_vertex_program3;
        bool extGLX_SGIX_hyperpipe;
        bool extGLX_MESA_agp_offset;
        bool extGL_EXT_texture_compression_dxt1;
        bool extGL_EXT_framebuffer_object;
        bool extGL_GREMEDY_string_marker;
        bool extGL_EXT_packed_depth_stencil;
        bool extWGL_3DL_stereo_control;
        bool extGL_EXT_stencil_clear_tag;
        bool extGL_EXT_texture_sRGB;
        bool extGL_EXT_framebuffer_blit;
        bool extGL_EXT_framebuffer_multisample;
        bool extGL_MESAX_texture_stack;
        bool extGL_EXT_timer_query;
        bool extGL_EXT_gpu_program_parameters;
        bool extGL_APPLE_flush_buffer_range;
        bool extGL_NV_gpu_program4;
        bool extGL_NV_geometry_program4;
        bool extGL_EXT_geometry_shader4;
        bool extGL_NV_vertex_program4;
        bool extGL_EXT_gpu_shader4;
        bool extGL_EXT_draw_instanced;
        bool extGL_EXT_packed_float;
        bool extWGL_EXT_pixel_format_packed_float;
        bool extGLX_EXT_fbconfig_packed_float;
        bool extGL_EXT_texture_array;
        bool extGL_EXT_texture_buffer_object;
        bool extGL_EXT_texture_compression_latc;
        bool extGL_EXT_texture_compression_rgtc;
        bool extGL_EXT_texture_shared_exponent;
        bool extGL_NV_depth_buffer_float;
        bool extGL_NV_fragment_program4;
        bool extGL_NV_framebuffer_multisample_coverage;
        bool extGL_EXT_framebuffer_sRGB;
        bool extGLX_EXT_framebuffer_sRGB;
        bool extWGL_EXT_framebuffer_sRGB;
        bool extGL_NV_geometry_shader4;
        bool extGL_NV_parameter_buffer_object;
        bool extGL_EXT_draw_buffers2;
        bool extGL_NV_transform_feedback;
        bool extGL_EXT_bindable_uniform;
        bool extGL_EXT_texture_integer;
        bool extGLX_EXT_texture_from_pixmap;
        bool extGL_GREMEDY_frame_terminator;
        bool extGL_NV_conditional_render;
        bool extGL_NV_present_video;
        bool extGLX_NV_present_video;
        bool extWGL_NV_present_video;
        bool extGLX_NV_video_out;
        bool extWGL_NV_video_output;
        bool extGLX_NV_swap_group;
        bool extWGL_NV_swap_group;
        bool extGL_EXT_transform_feedback;
        bool extGL_EXT_direct_state_access;
        bool extGL_EXT_vertex_array_bgra;
        bool extWGL_NV_gpu_affinity;
        bool extGL_EXT_texture_swizzle;
        bool extGL_NV_explicit_multisample;
        bool extGL_NV_transform_feedback2;
        bool extGL_ATI_meminfo;
        bool extGL_AMD_performance_monitor;
        bool extWGL_AMD_gpu_association;
        bool extGL_AMD_texture_texture4;
        bool extGL_AMD_vertex_shader_tessellator;
        bool extGL_EXT_provoking_vertex;
        bool extGL_EXT_texture_snorm;
        bool extGL_AMD_draw_buffers_blend;
        bool extGL_APPLE_texture_range;
        bool extGL_APPLE_float_pixels;
        bool extGL_APPLE_vertex_program_evaluators;
        bool extGL_APPLE_aux_depth_stencil;
        bool extGL_APPLE_object_purgeable;
        bool extGL_APPLE_row_bytes;
        bool extGL_APPLE_rgb_422;
        bool extGL_NV_video_capture;
        bool extGLX_NV_video_capture;
        bool extWGL_NV_video_capture;
        bool extGL_EXT_swap_control;
        bool extGL_NV_copy_image;
        bool extWGL_NV_copy_image;
        bool extGLX_NV_copy_image;
        bool extGL_EXT_separate_shader_objects;
        bool extGL_NV_parameter_buffer_object2;
        bool extGL_NV_shader_buffer_load;
        bool extGL_NV_vertex_buffer_unified_memory;
        bool extGL_NV_texture_barrier;
        bool extGL_AMD_shader_stencil_export;
        bool extGL_AMD_seamless_cubemap_per_texture;
        bool extGLX_INTEL_swap_event;
        bool extGL_AMD_conservative_depth;
        bool extGL_EXT_shader_image_load_store;
        bool extGL_EXT_vertex_attrib_64bit;
        bool extGL_NV_gpu_program5;
        bool extGL_NV_gpu_shader5;
        bool extGL_NV_shader_buffer_store;
        bool extGL_NV_tessellation_program5;
        bool extGL_NV_vertex_attrib_integer_64bit;
        bool extGL_NV_multisample_coverage;
        bool extGL_AMD_name_gen_delete;
        bool extGL_AMD_debug_output;
        bool extGL_NV_vdpau_interop;
        bool extGL_AMD_transform_feedback3_lines_triangles;
        bool extGLX_AMD_gpu_association;
        bool extGLX_EXT_create_context_es2_profile;
        bool extGLX_EXT_create_context_es_profile;
        bool extWGL_EXT_create_context_es2_profile;
        bool extWGL_EXT_create_context_es_profile;
        bool extGL_AMD_depth_clamp_separate;
        bool extGL_EXT_texture_sRGB_decode;
        bool extGL_NV_texture_multisample;
        bool extGL_AMD_blend_minmax_factor;
        bool extGL_AMD_sample_positions;
        bool extGL_EXT_x11_sync_object;
        bool extWGL_NV_DX_interop;
        bool extGL_AMD_multi_draw_indirect;
        bool extGL_EXT_framebuffer_multisample_blit_scaled;
        bool extGL_NV_path_rendering;
        bool extGL_AMD_pinned_memory;
        bool extWGL_NV_DX_interop2;
        bool extGL_AMD_stencil_operation_extended;
        bool extGLX_EXT_swap_control_tear;
        bool extWGL_EXT_swap_control_tear;
        bool extGL_AMD_vertex_shader_viewport_index;
        bool extGL_AMD_vertex_shader_layer;
        bool extGL_NV_bindless_texture;
        bool extGL_NV_shader_atomic_float;
        bool extGL_AMD_query_buffer_object;
        bool extGL_NV_compute_program5;
        bool extGL_NV_shader_storage_buffer_object;
        bool extGL_NV_shader_atomic_counters;
        bool extGL_NV_deep_texture3D;
        bool extGL_NVX_conditional_render;
        bool extGL_AMD_sparse_texture;
        bool extGLX_EXT_buffer_age;
        bool extGL_AMD_shader_trinary_minmax;
        bool extGL_INTEL_map_texture;
        bool extGL_NV_draw_texture;
        bool extGL_AMD_interleaved_elements;
        bool extGL_NV_bindless_multi_draw_indirect;
        bool extGL_NV_blend_equation_advanced;
        bool extGL_NV_blend_equation_advanced_coherent;
        bool extGL_NV_gpu_program5_mem_extended;
        bool extGL_AMD_shader_atomic_counter_ops;
        bool extWGL_NV_delay_before_swap;
        bool extGL_EXT_shader_integer_mix;
        bool extGL_NVX_gpu_memory_info;
        bool extGL_EXT_debug_label;
        bool extGL_EXT_debug_marker;
        bool extGL_INTEL_fragment_shader_ordering;
        bool extGL_AMD_occlusion_query_event;
        bool extGL_INTEL_performance_query;
        bool extGL_AMD_shader_stencil_value_export;
        bool extGLX_NV_delay_before_swap;
        bool extGLX_MESA_query_renderer;
        bool extGL_NV_shader_thread_group;
        bool extGL_NV_shader_thread_shuffle;
        bool extGL_EXT_shader_image_load_formatted;
        bool extGL_AMD_transform_feedback4;
        bool extGL_AMD_gpu_shader_int64;
        bool extGL_EXT_glx_stereo_tree;
        bool extGL_AMD_gcn_shader;
        bool extGL_NV_shader_atomic_int64;
        bool extGL_NV_bindless_multi_draw_indirect_count;
        bool extGLX_NV_copy_buffer;
        bool extGL_KHR_blend_equation_advanced;
        bool extGL_KHR_blend_equation_advanced_coherent;
        bool extGL_NV_uniform_buffer_unified_memory;
        bool extGL_EXT_polygon_offset_clamp;
        bool extGL_EXT_static_vertex_array;
        bool extGL_EXT_vertex_array_set;
        bool extGL_EXT_vertex_array_setXXX;
        bool extGL_SGIX_fog_texture;
        bool extGL_SGIX_fragment_specular_lighting;
};

#endif // GLEXTENSIONS_H
