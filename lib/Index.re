let translate = source => {
  let parseSource = (source) => {
    let parseOptions =
      Some(
        Flow_parser.Parser_env.{
          esproposal_optional_chaining: false,
          esproposal_class_instance_fields: true,
          esproposal_class_static_fields: true,
          esproposal_decorators: false,
          esproposal_export_star_as: true,
          esproposal_nullish_coalescing: false,
          types: true,
          types_in_comments: false,
          use_strict: false,
        },
      );

    Flow_parser.Parser_flow.program(source, ~parse_options=parseOptions);
  };

  let _parsed = parseSource(source);

  "todo";
};