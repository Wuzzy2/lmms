#ifdef SINGLE_SOURCE_COMPILE
#undef SINGLE_SOURCE_COMPILE
#include "src/tracks/instrument_track.cpp"
#include "src/core/midi_tab_widget.cpp"
#include "src/lib/string_pair_drag.cpp"
#include "src/lib/buffer_allocator.cpp"
#include "src/lib/journalling_object.cpp"
#include "src/lib/project_journal.cpp"
#include "src/lib/embed.cpp"
#include "src/lib/base64.cpp"
#include "src/lib/mmp.cpp"
#include "src/lib/ladspa_manager.cpp"
#include "src/lib/oscillator.cpp"
#include "src/lib/clipboard.cpp"
#include "src/lib/sample_buffer.cpp"
#include "src/core/import_filter.cpp"
#include "src/core/config_mgr.cpp"
#include "src/core/envelope_and_lfo_widget.cpp"
#include "src/core/song_editor.cpp"
#include "src/core/note.cpp"
#include "src/core/sample_play_handle.cpp"
#include "src/core/piano_roll.cpp"
#include "src/core/arp_and_chords_tab_widget.cpp"
#include "src/core/about_dialog.cpp"
#include "src/core/instrument.cpp"
#include "src/core/main.cpp"
#include "src/core/timeline.cpp"
#include "src/core/note_play_handle.cpp"
#include "src/core/plugin.cpp"
#include "src/core/export_project_dialog.cpp"
#include "src/core/main_window.cpp"
#include "src/core/engine.cpp"
#include "src/core/plugin_browser.cpp"
#include "src/core/setup_dialog.cpp"
#include "src/core/bb_editor.cpp"
#include "src/core/envelope_tab_widget.cpp"
#include "src/core/mixer.cpp"
#include "src/core/piano_widget.cpp"
#include "src/core/name_label.cpp"
#include "src/core/preset_preview_play_handle.cpp"
#include "src/core/time_roll.cpp"
#include "src/core/track_container.cpp"
#include "src/core/track.cpp"
#include "src/core/file_browser.cpp"
#include "src/core/surround_area.cpp"
#include "src/midi/midi_alsa_seq.cpp"
#include "src/midi/midi_oss.cpp"
#include "src/midi/midi_port.cpp"
#include "src/midi/midi_client.cpp"
#include "src/midi/midi_mapper.cpp"
#include "src/midi/midi_alsa_raw.cpp"
#include "src/audio/audio_oss.cpp"
#include "src/audio/audio_file_device.cpp"
#include "src/audio/audio_alsa.cpp"
#include "src/audio/audio_sdl.cpp"
#include "src/audio/audio_port.cpp"
#include "src/audio/audio_device.cpp"
#include "src/audio/audio_jack.cpp"
#include "src/audio/audio_file_ogg.cpp"
#include "src/audio/audio_sample_recorder.cpp"
#include "src/audio/audio_file_wave.cpp"
#include "src/lmms_single_source.cpp"
#include "src/tracks/pattern.cpp"
#include "src/tracks/bb_track.cpp"
#include "src/tracks/sample_track.cpp"
#include "src/tracks/time_pattern.cpp"
#include "src/widgets/project_notes.cpp"
#include "src/widgets/led_checkbox.cpp"
#include "src/widgets/knob.cpp"
#include "src/widgets/pixmap_button.cpp"
#include "src/widgets/qxembed.cpp"
#include "src/widgets/group_box.cpp"
#include "src/widgets/tab_bar.cpp"
#include "src/widgets/kmultitabbar.cpp"
#include "src/widgets/tab_widget.cpp"
#include "src/widgets/combobox.cpp"
#include "src/widgets/rubberband.cpp"
#include "src/widgets/cpuload_widget.cpp"
#include "src/widgets/side_bar_widget.cpp"
#include "src/widgets/visualization_widget.cpp"
#include "src/widgets/text_float.cpp"
#include "src/widgets/tool_button.cpp"
#include "src/widgets/rename_dialog.cpp"
#include "src/widgets/fade_button.cpp"
#include "src/widgets/tempo_sync_knob.cpp"
#include "src/widgets/tooltip.cpp"
#include "src/widgets/nstate_button.cpp"
#include "src/widgets/lcd_spinbox.cpp"
#include "src/widgets/automatable_button.cpp"
#include "src/widgets/volume_knob.cpp"
#endif
